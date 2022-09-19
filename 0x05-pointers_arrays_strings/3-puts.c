#include <stdio.h>
#include "main.h"

/**
 * _puts - prints string followed by new line
 * @str - string of characters printed 
 * return -none
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