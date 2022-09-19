#include "main.h"
#include <stdio.h>

/**
 * swap_int - changes two values
 * int a -  pointer first integer
 * int b - pointer second integer
 * return - none
 */
void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;
}
