#DocCheck

## Goal

DocCheck provides a set of utilities to enforce artifacts (e.g., code snippets or output of execution) used in the documentation is compatible and up-to-date with the state of software development they describe.

## Directives

DocCheck provides a set of directives that can be used in documentations to enforce desired invariants.

### `same-as-file` directive:

Use `same-as-file` directive to ensure that the code section following this directive is exactly the same as a source file tested in a unit test.