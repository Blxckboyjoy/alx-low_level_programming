#include <stdio.h>
#include "main.h"

/**
* rev_string - a function that reverses a string
* @s: the string to be reversed
* Return: returns nothing
*/
void print_rev(char *s)
{
int i, j;
int c = 0;

for (i = 0; 1 ; i++)
{
if (s[i] == 0)
break;
c++;
}
for (j = c - 1; j >= 0; j--)
{
printf("%c", s[j]);
}
printf("\n");
}
