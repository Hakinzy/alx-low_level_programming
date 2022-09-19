#include "main.h"

/**
 * _puts - function that prints a new line
 * @str: print shows string
 * Return: 0
 */
void _puts(char *str)
{
	int i;

	for (1 = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
