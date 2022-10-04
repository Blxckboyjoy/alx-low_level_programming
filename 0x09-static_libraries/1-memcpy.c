#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - a function that copies a memory area.
 * @dest: dest memory
 * @src: source memory area
 * @n: bytes to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
