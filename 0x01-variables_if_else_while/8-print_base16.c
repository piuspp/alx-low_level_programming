#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints char below 10
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (y = 'a'; y <= 'g'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
