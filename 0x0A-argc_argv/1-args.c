#include <stdio.h>

/**
 * main - print number of argument passed
 * @argc: number of argument
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc);
	return (0);
}
