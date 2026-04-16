To ensure the robustness of our `_printf` implementation, we conducted manual testing using a custom test suite.

You can find our test cases in:
* `tests/printf_our_tests.c`

To run the tests locally:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 tests/printf_our_tests.c *.c -o test_output && ./test_output`
~                                                                                                             
