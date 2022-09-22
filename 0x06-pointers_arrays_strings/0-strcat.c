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
 * Return:retuurns pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, c = 0, e = 0, j = 0;

for (i = 0; dest[i] != 0; i++)
c++;
for (i = 0; src[i] != 0; i++)
e++;
for (i = 0; src[j] != 0; i++)
{
dest[i] = src[j];
j++;
}
return (dest);

}
