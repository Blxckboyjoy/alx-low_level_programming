#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memset - returns a pointer to dest.
 * @s: a pointer to the block of memory to fill.
 * @b: constant byte to fill.
 * @n: This is the number of bytes to be set to the value.
 * Return - the memory area filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;

for (j = 0; j < n; j++)
{
s[j] = b;
}
return (s);
}
