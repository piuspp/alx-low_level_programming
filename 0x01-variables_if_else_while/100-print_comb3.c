#include <stdio.h>

/**
 * main - entry point
 * return: always 0 (success)
 */

int main(void)
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
	for (j = 1; j < 10; j++)
	{
		if (i > j | i == j)
		{
			continue;
		}
	
	putchar(i + '0');
	putchar(j + '0');
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
