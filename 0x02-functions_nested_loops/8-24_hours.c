#include "main.h"
#include <stdio.h>

/**
 * 24_hours - prints every minute of the day
 * @i,j,k,x: integer variable
 * Return: always 0 (success)
 */
void jack_bauer(void)
{

	int i, j, k, x;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			if ((i == 2) && (j == 4))
			{
				break;
			}
			for (k = 0; k < 6; k++)
			{
				for (x = 0; x < 10; x++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar (':');
					_putchar(k + '0');
					_putchar(x + '0');
					_putchar('\n');
				}
			}
		}
	}
}
