import re, ast
from typing import List, Dict, Callable, Any, Pattern, Tuple

from parser import failure, success, succeeded
from utils import DocCheckerCtx


class Directive(object):
    def __init__(self, ext_to_regexes: Dict[str, str], custom_parser: Callable[[str], Tuple[str, Dict[str, Any]]],
                 handler: Callable[[Dict[str, Any], DocCheckerCtx], None]):
        self.ext_to_patterns: Dict[str, Pattern] = {}
        for ext, pattern in ext_to_regexes.items():
            self.ext_to_patterns[ext] = re.compile(pattern)

        self.custom_parser: Callable[[str], Tuple[str, Dict[str, Any]]] = custom_parser
        self.handler = handler

    def try_parse_directive(self, ctx: DocCheckerCtx, directive_config: List[Dict[str, Any]]) -> Tuple[str, Any]:
        line = ctx.doc_file.next_non_empty_line()
        matches = self.ext_to_patterns[ctx.doc_file_ext()].findall(line)
        if len(matches) > 1:
            raise ValueError("more than one directives in a line")

        match = matches[0] if len(matches) else None
        if match:
            try:
                directive_config.append(ast.literal_eval(match))
                return success()
            except ValueError:
                # Try using the custom parser first:
                if succeeded(self.custom_parser(match)):
                    directive_config.append(self.custom_parser(match)[1])
                return success()
        else:
            return failure()

    def handle(self, config, ctx):
        self.handler(config, ctx)
