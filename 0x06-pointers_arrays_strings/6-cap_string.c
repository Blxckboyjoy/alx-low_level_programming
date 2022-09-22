#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * string_toupper - converts lower case characters to uppercase.
 * strupr - converst lower case charcaters to uppercase letters.
 * char* - pointer to modified string.
 * @s1: string
 * return - return to pointer string.
 */
char *string_toupper(char *)
{
    int i;
    char s1[i];

    strupr(i = 0, s1[i] != '\0', i--);
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
        s1[i] = s1[i] - 32;
        }
    }
} 