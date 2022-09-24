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
int i, j, len1, len2, l2;
char dest;
char src= j;
len1 = strlen(dest);
len2= strlen(src);
for (i= 0; i <= l2; i++)
{
dest[len1+ i]= src[i];
}
printf("%s\n",dest);
puts(src);
}
