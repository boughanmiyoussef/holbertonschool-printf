#include "main.h"
#include <unistd.h>

/**
 * my_int_printer - print integers.
 *
 * @args: argument.
 *
 * Return: count of chars.
 */

int my_int_printer(va_list args)
{
int abc = 1;
int j = 0;
long int num = va_arg(args, int);
long int def;

if (num < 0)
{
j += _putchar('-');
num *= -1;
}

if (num < 10)
return (j += _putchar(num + '0'));

def = num;

while (def > 9)
{
abc *= 10;
def /= 10;
}

while (abc >= 1)
{
j += _putchar(((num / abc) % 10) + '0');
abc /= 10;
}

return (j);
}
