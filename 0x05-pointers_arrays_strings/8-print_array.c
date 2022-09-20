#include <stdio.h>
#include "main.h"

/**
* print_array - print n elements of an array of integers
* @a: elements of an array
* @n: number of values
* Return: 0
*/
void print_array(int *a, int n)
{
int s;

for (s = 0; s < n; s++)
{
printf("%d", a[s]);
if (s != n - 1)
printf(", ");
}

printf("\n");
}
