#include <stdio.h>

/**
 * main -  prints its name, followed by a new line.
 * @argc: number of command-line arguments
 * @argv: array of strings containing the command-line arguments
 * Returns - 0
 */
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
