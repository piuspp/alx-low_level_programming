#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * *Description: prints char below 10
 * Return:Always 0 (success)
 */
int main(void)

{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
