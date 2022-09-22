#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * strcat - appends a copy of the string pointed to by s2,
 * to the end of the string pointed by s1.
 * strcpy - copies the string pointed,
 * (including null character) to the destiation.
 * strlen - find lenght of string.
 * @dest: array returned by pointer.
 * @src:string to be coppied.
 * returns: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = strlen(dest);
int i;

for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0' ;
               
return (dest); 

}