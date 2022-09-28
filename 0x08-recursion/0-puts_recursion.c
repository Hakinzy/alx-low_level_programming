#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - a function that prints string
* @s:string to be printed
* Return: 0
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
