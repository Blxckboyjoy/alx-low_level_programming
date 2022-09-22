#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - function that cocantenates two strings.
 * @dest: array returned by pointer.
 * @src:string to be coppied.
 * @n: number of times loop initiates.
 * return - pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, c = 0, e = 0, z = 0;

for (i = 0 ; dest[i] != 0; i++)
c++;
for (i = 0 ; src[i] != 0 ; i++)
e++;
for (i = 0; src[i] != 0; i++)
{
dest[i] = src[z];
z++;
}
return (dest);

}
