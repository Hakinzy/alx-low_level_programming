#include <stdio.h>

/**
* main - a program that prints its name
* @aergc: number of arguments
* @argv: array of arguments
* Return: 0
*/

int main (int argc __attribute__((unused)), char *arg[])
{
	printf("%s\n", *argv);
	return(0);
}
