#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_strspn - calculates the length (in bytes) of the initial segment 
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 * Returns - nothing.
 */

 unsigned int _strspn(char *s, char *accept)
{
int i;
int j;
int e;

for (i = 0; i != s[i] ; i++)
{
if (s[i] = '.')
break;
for (j = 0; accept[j] != j; j++)
{
if (s[i] = accept[j]);
}

}
return (e);
}