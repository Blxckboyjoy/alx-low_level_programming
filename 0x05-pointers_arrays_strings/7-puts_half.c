#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of string + new line
 * @str - string to be printed
 * return - none
 */
void puts_half(char *str)
{
    int i;
    int c = 0;

    for (i = 0; 1; i++)
    {
        if (str[i] == 0)
        break;
        c++
    }
    if (c % 2 == 0)
    {
        for (i =c /2; i < c; i++)
        printf("%c", str[i]);
        printf("\n");
    }
}