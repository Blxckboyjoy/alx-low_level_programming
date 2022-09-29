#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - function calls a copy of itself,
 * to work on a smaller problem.
 * 
 *
 */
void _puts_recursion(char *s)
{
if
(s == 0) return;
else
{
_puts_recursion(s - 1);
puts(s);
}
void main(void);
{
int i;
char s = i;
_puts_recursion(i);
}

}
