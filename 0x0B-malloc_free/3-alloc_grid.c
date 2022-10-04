#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - a function that allocates memory for
* a 2 dimensional array of integers
* @width: the number of columns of the array
* @hight: the number of rows of the array
* Return: returns a pointer to the 2-dimensional array of integers
*/
int **alloc_grid(int width, int hight)
{
int i, j;
int len = 0;
int *ptr;
int **arr;

if (width <= 0 || hight <= 0)
return (NULL);

len = sizeof(int *) * hight + sizeof(int) * width * hight;
arr = (int **) malloc(len);
if (arr == NULL)
return (NULL);
ptr = (int *) *(arr + hight);

for (i = 0; i < hight; i++)
{
arr[i] = (ptr + width * i);
}

for (i = 0; i < hight; i++)
{
for (j = 0; j < width; j++)
{
arr[i][j] = 0;
}
}


return (arr);
}
