#include <stdio.h>
#include <math.h>

/**
 * main - prints multiples of 3 and 5
 * return: always 0 (success)
 */

int main(void)
{
	int i, j;

	j = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j = j + i;
		}
	}
	printf("%d\n", j);
	return (0);
}

