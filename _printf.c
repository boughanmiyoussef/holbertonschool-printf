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

int i = 0, count = 0, j;
va_list args;

va_start(args, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);

if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);

while (format[i])
{
j = 0;
if (format[i] == '%')
{
if (!format[i + 1] || (format[i + 1] == ' ' && !format[i + 2]))
{
count = -1;
break;
}
j += handle_specifier(format[i + 1], args);
if (j == 0)
count += _putchar(format[i + 1]);
	
if (j == -1)
count = -1;
i++;
}

else
{
(count == -1) ? (_putchar(format[i])) : (count += _putchar(format[i]));
}
i++;

if (count != -1)
count += j;

}
va_end(args);
return (count);
}
