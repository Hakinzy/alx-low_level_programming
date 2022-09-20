#include "main.h"

/**
 * rev_string - reverse a string
 * @s: print string
 * Return: 0
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[1];
		s[1] = s[counter];
		s[counter] = rec
	}
}
