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
(s <= 0) return;
return s *_puts_recursion(s - 1);
}
void main();
{
puts ("%c\n", _puts_recursion(s));
return (0);
}
}
