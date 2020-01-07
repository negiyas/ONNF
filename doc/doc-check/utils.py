import logging


# Based on https://stackoverflow.com/a/6367075.
class WrappedFile(object):
    """
    Complements the standard python file object in two ways:
    - Implements a line number based EOF checker.
    - Allows retriving the current line position of the cursor, which is
      good for error localization.
    """

    def __init__(self, f):
        self.f = f
        self.line = 0

        # Compute the total number of lines.
        self.num_lines = len(f.readlines())
        f.seek(0)

    def close(self):
        return self.f.close()

    def readline(self):
        self.line += 1
        return self.f.readline()

    def next_non_empty_line(self):
        while not self.eof():
            self.line += 1
            line = self.f.readline()
            if len(line.strip()):
                return line
        raise RuntimeError("Enf of file.")

    def skip_lines(self, num_lines):
        for i in range(num_lines):
            self.readline()

    def eof(self):
        return self.line >= self.num_lines

    # to allow using in 'with' statements
    def __enter__(self):
        return self

    def __exit__(self, exc_type, exc_val, exc_tb):
        self.close()


class DocCheckerCtx(object):
    def __init__(self, root_dir: str):
        self.root_dir = root_dir

    def open(self, file_name):
        self.doc_file = WrappedFile(open(file_name, 'r'))
        return self.doc_file


def success(states=None):
    return "ok", states


def failure(states=None):
    return "failed", states


def succeeded(states):
    return states[0] == "ok"


def setup_logger(name):
    handler = logging.StreamHandler()
    logger = logging.getLogger(name)
    logger.setLevel(logging.DEBUG)
    logger.addHandler(handler)
    return logger
