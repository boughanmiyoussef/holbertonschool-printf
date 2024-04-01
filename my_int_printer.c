#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * my_int_printer - Print integers.
 * @args: Argument.
 * Return: Count of chars.
 */
int my_int_printer(va_list args)
{
int count = 0;
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
j *= 10;
def /= 10;
}
while (j >= 1)
{
count += _putchar(((num / j) % 10) + '0');
j /= 10;
}

return (count);
}
