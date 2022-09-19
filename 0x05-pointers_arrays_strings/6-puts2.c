#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every character of string + new line
 * @str: string to be printed
 * return -none
 */
void puts2(char *str)
{
int i;

for (i = 0; 1 ; i++)
{
if (*(str + i) == 0)
{
printf("\n");
break;
}
if (i % 2 == 0)
printf("%c", *(str + i));
}
}
