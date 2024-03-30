# Custom Printf Implementation

This project implements a custom printf function in C, providing functionality similar to the standard printf function available in the C standard library.

## Description

The main.h file contains the declarations of functions and structures necessary for the implementation of the custom printf function.

The handle_specifier.c file implements the function responsible for handling format specifiers and invoking corresponding printer functions.

The my_char_printer.c file implements the function to print a single character.

The my_int_printer.c file implements the function to print integers.

The my_string_printer.c file implements the function to print strings.

The my_reverse_string_printer.c file implements the function to print strings in reverse.

The main.c file contains test cases to verify the functionality of the custom printf function.

The _putchar.c file implements the function to write a character to the standard output.

## Format Specifiers

- `%c`: Print a single character.
- `%s`: Print a string.
- `%%`: Print a percent sign.
- `%d`, `%i`: Print signed integers.
- `%r`: Print a string in reverse.

## Project Requirements

- All files will be compiled on Ubuntu 14.04 LTS.
- Programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.
- Code should use the Betty style.
- No usage of global variables.
- Authorized functions and macros include:
  - `write` (man 2 write)
  - `malloc` (man 3 malloc)
  - `free` (man 3 free)
  - `va_start` (man 3 va_start)
  - `va_end` (man 3 va_end)
  - `va_copy` (man 3 va_copy)
  - `va_arg` (man 3 va_arg)

## Notes

- The program does not handle buffer handling, flag characters, field width, precision, or length modifiers.

## Author

Youssef Boughanmi
