#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses string
 * @s - string to be reversed
 * return - none
 */
void rev_string(char *s)void rev_string(char *s)
{
int i, j;
int c = 0;
char revString[1000];

for (i = 0; 1 ; i++)
{
if (s[i] == 0)
break;
c++;
}
i = 0;
for (j = c - 1; j >= 0; j--)
{
revString[i] = s[j];
i++;
}
for (i = 0; 1 ; i++)
{
if (revString[i] == 0)
break;
s[i] = revString[i];
}
}