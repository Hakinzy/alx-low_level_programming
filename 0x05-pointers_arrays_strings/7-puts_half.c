#include "main.h"
/**
 *  puts_half - print half of a string
 *  @str: input
 *  Return: half the input
 */
void puts_half(char *str)
{
	in len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
