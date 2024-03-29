#include "main.h"
#include <unistd.h>
/**
 * _printf - function name.
 *
 * @format: Format of specifier.
 *
 * Return: int.
 */
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;

    va_start(args, format);
    if (!format)
        return (-1);

    while (*format)
    {
        if (*format == '%')
        {
            if (*(format + 1) == '%')
            {
                count += _putchar('%');
                format += 2;
                continue;
            }
            count += handle_specifier(*(format + 1), args);
            format += 2;
        }
        else
        {
            count += _putchar(*format);
            format++;
        }
    }

    va_end(args);
    return (count);
}


