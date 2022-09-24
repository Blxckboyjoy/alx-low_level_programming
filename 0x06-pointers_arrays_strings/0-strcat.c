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
 * Return: none.
 */
char *_strcat(char *dest, char *src)
{
int i;
char dest;
char src;
strncat(dest, src, i);
printf("%s\n", dest);
puts(src);
}
