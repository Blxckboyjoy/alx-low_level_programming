#include <stdio.h>
#include <stdio.h>

/**
 * _strcpy: function copies the string pointed by source to the destination.
 * @dest: array returned by pointer
 * @src: string to be copied
 * return - string to dest
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; 1; i++)
{
dest[i] = src[i];
if (src[i] == 0)
break;
}
return (dest);
}
