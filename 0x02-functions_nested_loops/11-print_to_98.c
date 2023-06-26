#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - To print natural numbers n to 98
 * @n: An integer variable
 * return: always 0 (success)
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i + '0');
		_putchar(',');
		_putchar(' ');
	}
}
