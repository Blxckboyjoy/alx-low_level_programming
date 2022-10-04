#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies the string pointed,
 * (including null character) to the dest.
 * @dest: array returned by pointer.
 * @src: string to be copied.
 * @n: number of charcarters to be copied.
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);

}
