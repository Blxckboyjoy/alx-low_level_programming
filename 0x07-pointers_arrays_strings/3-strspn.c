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
	unsigned int i, j;
	unsigned int c = 0;

	for (i = 0; s[i] != 0; i++)
	{
		if (s[i] == ' ')
			break;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
				c++;
		}
	}
	return (c);
}
