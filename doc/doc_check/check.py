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

from utils import setup_logger, DocCheckerCtx

logger = setup_logger("doc-check")

from parser import *

parser = argparse.ArgumentParser()
parser.add_argument(
    "root_dir",
    help="directory in which to look for documentation to operate on")

parser.add_argument('--exclude_dirs', nargs='+',
                    help='a set of directories to exclude, with path specified relative to root_dir', default=[])


def main(root_dir, exclude_dirs):
    for i, exclude_dir in enumerate(exclude_dirs):
        exclude_dirs[i] = os.path.join(root_dir, exclude_dir)

    ctx = DocCheckerCtx(root_dir)
    for doc_file in Path(root_dir).rglob('*.md'):
        # Skip, if doc file is in directories to be excluded.
        if any([str(doc_file).startswith(exclude_dir) for exclude_dir in exclude_dirs]):
            continue

        print("Checking {}...".format(doc_file))
        with ctx.open(doc_file) as markdown_file:
            while not markdown_file.eof():
                line = markdown_file.readline()
                try_parse_and_handle_directive(line, ctx)


if __name__ == "__main__":
    # Make common utilities visible by adding them to system paths.
    sys.path.insert(1, os.path.join(sys.path[0], '..'))

    args = parser.parse_args()
    main(**vars(args))
