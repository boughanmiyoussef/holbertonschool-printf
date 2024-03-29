#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * my_string_printer - print string.
 *
 * @args: argument.
 *
 * Return: int
 */

int my_string_printer(va_list args)
{
int i;
int j = 0;
char *str = va_arg(args, char *);

if (!str)
str = "(null)";

if (str[0] == '\0')
return (-1);

for (i = 0; str[i] != '\0'; i++)
j += _putchar(str[i]);

return (j);
}
