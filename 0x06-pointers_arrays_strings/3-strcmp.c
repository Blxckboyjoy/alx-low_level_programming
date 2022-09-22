#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp -  compares two strings character by character,
 * if the strings are equal, the function returns 0.
 * @s1: array returned by pointer.
 * @s2: string to be copied.
 * Return: pointer to the resulting string dest.
 */
int _strcmp(char *s1, char *s2)
{
int n, l1, l2, i;


strcmp(s1,s2);

l1 = strlen(s1);
l2 = strlen(s2);

for (i = 0; i <= l2; i++)
{
s1[l1 + i] = s2[i];

}

}
