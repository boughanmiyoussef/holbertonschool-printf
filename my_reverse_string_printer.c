#include "main.h"
/**
 * my_reverse_string_printer - function name.
 * @args: Arguments
 * Return: int
 */
int my_reverse_string_printer(va_list args)
{

int j = 0, i = 0;
char *s = va_arg(args, char *);

if (!s)
s = "(null)";

while (s[i])
{
i++;
}
	
while (i >= 0)
{
j += _putchar(s[i]);
i--;
}
	
j--;
return (j);
}
