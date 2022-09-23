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
char dest;
char src;
int l1, l2, n;

l1= strlen(dest);
l2= strlen(src);
for (n= 0; n <= l2; n++)
{
dest[l1+ n] = src[n];
}
printf("%cdest", dest);
puts(src);

}
