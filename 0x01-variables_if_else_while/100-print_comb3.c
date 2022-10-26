#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints char below 10
 * Return:Always 0 (success)
 */

int main(void)
{
	int i, j;
	for (i = 0; i <= 99; i++)
	{

	}
	for (j = 1; j < 99; j++)
	{
		if (i + j == j + i)
		{
			continue;
		}
		putchar(i + '0');
		putchar(j + '0');
	}
	putchar('\n');
	return (0);
}
