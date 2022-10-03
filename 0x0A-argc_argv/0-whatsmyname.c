#include <stdio.h>
#include "main.h"

/**
 * main - program that prints name
 * @argc: number of command-line arguments
 * @argv: array of strings containing the command-line arguments
 * 
 */ 
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n",argv[0]);
return (0);
}