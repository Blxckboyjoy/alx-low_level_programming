#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - memory area to copy.
 * @dest: dest memory
 * @src: source memory area
 * @n: bytes to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i < n; i++ )
{
dest[i] = src[i];
}
return(dest);
}