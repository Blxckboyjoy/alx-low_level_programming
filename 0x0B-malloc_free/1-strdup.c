#include "main.h"
#include <stdlib.h>

/**
* _strdup - a function that copies a string
* @str: the string to  be copied
* Return: returns a pointer to a newly allocated space in memonry
* which contains a copy of the given string
*/
char *_strdup(char *str)
{
int i;
int c = 0;
char *newstr;

if (str == NULL)
return (NULL);
for (i = 0 ; ; i++)
{
c++;
if (str[i] == '\0')
break;
}

newstr = (char *) malloc(c * sizeof(char));
if (newstr == NULL)
return (NULL);

for (i = 0; i < c; i++)
{
newstr[i] = str[i];
}
return (newstr);
}
