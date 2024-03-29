#include "main.h"
#include <unistd.h>

/**
 * my_modulo_printer - print %.
 *
 * @args: arguments.
 *
 * Return: count of chars.
 */

int my_modulo_printer(va_list args)
{
(void)args;

_putchar('%');

return (1);
}
