# Custom Printf Implementation

## Description

This project implements a custom printf function in C, providing functionality similar to the standard printf function available in the C standard library.

### Format Specifiers:

- **%c**: This specifier is used to print a single character. It expects an `int` argument which represents the ASCII value of the character to be printed.

- **%s**: The %s specifier is used to print strings. It expects a `char *` argument, which is the pointer to the string to be printed.

- **%d and %i**: Both %d and %i specifiers are used to print integers. They expect an `int` argument.

- **%r**: This is a custom specifier implemented in this project. It prints a string in reverse order. It expects a `char *` argument, which is the pointer to the string to be printed.

- **%%**: The %% specifier is used to print a literal % symbol.

Each specifier corresponds to a specific printer function:

- %c corresponds to `my_char_printer`
- %s corresponds to `my_string_printer`
- %d and %i correspond to `my_int_printer`
- %r corresponds to `my_reverse_string_printer`
- %% is handled directly within the `_printf` function.

These specifiers allow for flexible and customizable formatting of output within the custom printf function.
