# ===-------------------- gen.py - Generate Documentation -----------------===//
#
# Copyright 2019 The IBM Research Authors.
#
# =============================================================================
#
# ===----------------------------------------------------------------------===//

import argparse
import os, sys

from pathlib import Path

from utils import setup_logger

logger = setup_logger("doc-check")

from parser import *

parser = argparse.ArgumentParser()
parser.add_argument(
    "root_dir",
    help="directory in which to look for documentation to operate on")


def main(args):
    from utils import DocCheckerCtx

    ctx = DocCheckerCtx(args.root_dir)
    for markdown_filename in Path(args.root_dir).rglob('*.md'):
        print("Checking {}...".format(markdown_filename))
        with ctx.open(markdown_filename) as markdown_file:
            while not markdown_file.eof():
                line = markdown_file.readline()
                directive_config = []
                try_parse_and_directive(line, directive_config, ctx)


if __name__ == "__main__":
    # Make common utilities visible by adding them to system paths.
    sys.path.insert(1, os.path.join(sys.path[0], '..'))

    args = parser.parse_args()
    main(args)
