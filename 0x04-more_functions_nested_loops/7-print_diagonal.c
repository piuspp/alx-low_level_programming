#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: An input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int j, k;

	for (j = 1; j <= n; j++)
	{
		for (k = 1; k < j; k++)
		{
			putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
	if (n <= 0)
	{
		putchar('\n');
	}
}
