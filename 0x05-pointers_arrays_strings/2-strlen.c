#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns length of string
 * @s - string ,pointer uses
 * return - length of string as int
 */
int _strlen(char *s)
{
	int i;
	int c = 0;

	for (i = 0; 1 ; i++)
	{
		if (*(s + i) == 0)
			break;
		c++;
	}
	return (c);
}