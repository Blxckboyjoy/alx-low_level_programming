#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - appends the string pointed,
 * to by src to the end of the string'
 * pointed by dest up to n characters long.
 * strcpy - copies the string pointed,
 * (including null character) to the destiation.
 * strlen - find lenght of string.
 * @dest: pointer to the destination array
 * @src: string to be appended.
 * @n:the maximum number of characters to,
 * be appended.
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = strlen(dest);
int i;

for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';

return (dest);
}
