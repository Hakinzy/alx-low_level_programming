#include "main.h"

/**
* _strlen - function to return the length of a string
* @s: length of a string
* Return: 0
*/
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return (len);
}
