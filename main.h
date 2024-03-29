#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * ConversionHandler - Struct for format
 * @specifiers: Conversion specifiers
 * @f: The function associated
 */
typedef struct ConversionHandler
{
char specifier;
int (*f)(va_list);
} ConversionHandler_t;

int _printf(const char *format, ...);
int handle_specifier(char format_specifier, va_list args);
int _putchar(char c);
int my_char_printer(va_list args);
int my_string_printer(va_list args);
int my_int_printer(va_list args);
int my_modulo_printer(va_list args);
int my_reverse_string_printer(va_list args);

#endif
