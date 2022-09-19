#include <stdio.h>
#include "main.h"

/**
* _strlen - a function that returns the length of a string
* @s: a pointer to a string
* Return: returns the length of the string as an int
*/
void _puts(char *str)
{
int i;

for (i = 0; 1 ; i++)
{
if (*(str + i) == 0)
{
printf("\n");
break;
}
printf("%c", *(str + i));
}
}
