#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - unction concatenates,
 * the destination string and the source string,
 * and the result is stored in the destination string.
 * @dest: pointer of the cocatenated string.
 * @src:string to be coppied.
 * @n: number of times loop initiates.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, dest_len; 
dest_len = strlen(dest);

for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}