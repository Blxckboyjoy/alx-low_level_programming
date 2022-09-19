#include <stdio.h>
#include "main.h"

/**
 * print_array - prints  input elements
 * @a: array to be printed
 * @n: numbers of elemens printed
 * return - none
 */
void print_array(int *a, int n)
{
int i;

if (n != 0 && n != 1)
for (i = 0; i < n; i++)
{
if (i != (n - 1))
printf("%d, ", a[i]);
else if (i == (n - 1))
printf("%d", a[i]);
}
putchar('\n');
}
