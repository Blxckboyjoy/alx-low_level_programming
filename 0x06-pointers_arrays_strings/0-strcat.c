#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - appends a copy of the string pointed to by s2,
 * to the end of the string pointed by s1.
 * @dest: array returned by pointer.
 * @src:string to be coppied.
 * returns: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, c=0,e=0,z=0;

for(i = 0; dest[i] != 0; i++)
c++;
for(i = 0;src[i] != 0; i++)
e++;
for(i = 0;src[i] != 0; i++)
{
    dest[i] = src[z];
    z++;
}       
return (dest); 

}