#include "main.h"
/**
* _print_rev_recursion - function that prints a string in reverse
* @s: to print result
* Return: 0
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_Print_rev_recurssion(s + 1);
_putchar(*s);
}
}
