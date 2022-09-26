#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * memset - fill memory with a constant byte.
 * @*s: a pointer to the block of memory to fill.
 * @b: the value to be set. The value is passed as an, 
 * int but the function fills the block of memory,
 * using the unsigned char conversion of this value.
 * @n: This is the number of bytes to be set to the value.
 * Return - returns a pointer to the memory area str.
 */ 
char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < n; i++)
{
char[s] = char[b];
}
return (s);
}