#include "main.h"

/**
* _isdigit - checks for a digit
* @c:character checked
* Return: returns 1 if c is single number,otherwise 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
