#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - Emulate the original printf function.
 * @format: Format string.
 * Return: Number of characters printed.
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

if (!format)
return (-1);

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;

if (*format == '\0')
return (-1);

if (*format == '%')
{
count += _putchar('%');
}

else if (*format == 'c')
{
count += _putchar(va_arg(args, int));
}

else if (*format == 's')
{

char *s = va_arg(args, char *);

if (s == NULL)
s = "(null)";

while (*s)
{
count += _putchar(*s);
s++;
}
}

else
{
count += _putchar('%');
count += _putchar(*format);
}

}
else
{
count += _putchar(*format);
}
format++;
}

va_end(args);
return (count);
}
