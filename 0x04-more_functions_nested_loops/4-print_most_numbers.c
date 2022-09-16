#include "main.h"

/**
* print_most_numbers - prints 0 - 9
* Description: print
* Return: Always 0
*/

void print_most_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
_putchar('0' + 1);
}
_putchar('\n');
}
