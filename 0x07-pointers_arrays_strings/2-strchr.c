#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - function returns a pointer to the first occurrence.
 * @s:dest memory
 * @c:source memory area
 */
char *_strchr(char *s, char c)
{
int i;
for (i = 0;i < 1 ; i++)
{
if (s[i] == c)
return ((s + c));

if (s[i] == 0)
break;
}
return (s);
}
