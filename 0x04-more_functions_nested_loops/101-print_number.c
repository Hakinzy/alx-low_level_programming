#include "main.h"

/**
 * print number - function that print integer
 *
 * @n: print number
 *
 * Return: 0
 */

void print_number(int n)
{
unsigned int num = n;

if (n < 0)
{
_putchar('_');
num = -num;
}

if ((num / 10) > 0)
print_number(num / 10);

_putchare((num % 10) + '0');
}
