#include <stdio.h>
#include "main.h"

/**
* _strcmp - compares two strings
* @s1: the string to be compared to
* @s2: the string being compared
* Return: returns pointer to the resulting string dest.
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == 0)
			return (0);
	}
	return (s1[i] - s2[i]);
}
