#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: the size of memory to print.
 * @c: the character of the memory to print.
 * Returns - pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{

char *ptr;
unsigned int i;

if (size == 0)
return (NULL);
ptr = (char *) malloc(size * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
