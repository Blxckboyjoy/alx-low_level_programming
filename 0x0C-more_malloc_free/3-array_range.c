#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: the minimum integer (included)
* @max: the maximum integer (included)
* Return: returns a pointer to the newly created array
*/
int *array_range(int min, int max)
{
int i = 0, j = 0, c = 0;
int *ptr;

if (min > max)
return (NULL);

c = max - min + 1;
ptr = malloc(sizeof(int) * c);
if (ptr == NULL)
return (NULL);

for (i = min; i <= max; i++, j++)
{
ptr[j] = i;
}
return (ptr);
}
