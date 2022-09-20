#include <stdio.h>
#include <stdio.h>

/**
 * _strcpy - Copy strings from source arr to destination arr
 * to the buffer pointed to by dest.
 * @dest: array returned by pointer
 * @src: string to be copied
 * return - pointer to destination array
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
