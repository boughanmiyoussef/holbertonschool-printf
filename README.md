Custom Printf Implementation
This project implements a custom printf function in C, providing functionality similar to the standard printf function available in the C standard library.

Description
The custom printf function is implemented in the _printf.c file, which serves as the main entry point for the printf functionality. It utilizes various helper functions to handle different format specifiers and print corresponding output.

Files
main.h: Contains declarations of functions and structures necessary for the implementation of the custom printf function.

handle_specifier.c: Implements the function responsible for handling format specifiers and invoking corresponding printer functions.

my_char_printer.c: Implements the function to print a single character ('%c' specifier).

my_int_printer.c: Implements the function to print integers ('%d' and '%i' specifiers).

my_string_printer.c: Implements the function to print strings ('%s' specifier).

my_reverse_string_printer.c: Implements the function to print strings in reverse ('%r' specifier).

_putchar.c: Implements the function to write a character to the standard output.

main.c: Contains test cases to demonstrate the usage of the custom printf function.

Format Specifiers
%c: Prints a single character. Corresponding function: my_char_printer.

%d and %i: Prints signed integers. Corresponding function: my_int_printer.

%s: Prints null-terminated strings. Corresponding function: my_string_printer.

%r: Prints strings in reverse. Corresponding function: my_reverse_string_printer.