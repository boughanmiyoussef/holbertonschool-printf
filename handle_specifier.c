#include "main.h"
/**
 * handle_specifier - Handle format specifier and call corresponding function.
 *
 * @format_specifier: The format specifier to handle.
 * @args: The list of arguments.
 *
 * Return: int.
 */
int handle_specifier(char format_specifier, va_list args)
{
int i = 0, j = 0;

ConversionHandler_t format_handlers[] = {
{'c', my_char_printer},
{'s', my_string_printer},
{'%', my_modulo_printer},
{'d', my_int_printer},
{'i', my_int_printer},
{'r', my_reverse_string_printer},
{0, NULL}
};

while (format_handlers[i].specifier != 0)
{
if (format_specifier == format_handlers[i].specifier)
{
j += format_handlers[i].f(args);
break;
}
i++;
}

if (j == 0)
{
j += _putchar('%');
j += _putchar(format_specifier);
}

return (j);
}
