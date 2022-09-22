#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * rev_array - reverses array to integers.
 * @a:an array of integers.
 * @n:number of elements to swap.
 * return - none.
 */
void reverse_array(int *a, int n)
{
    for (*a = 0; *a < n/2; *a++)
    {
        n = a[n - *a -1];
        a[n - *a -1] = n;
    }
}