#include "main.h"

/**
* print_line - prints a line
* @n: integer
*
* Return: 0
*/

void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
}

else
{
for (i = 1; i <= n; ++i)
{
_purchar('_');
}
_putchar('\n');
}
}
