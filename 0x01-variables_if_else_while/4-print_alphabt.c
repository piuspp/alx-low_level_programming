#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)

{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e')
		{
			continue;
		}
		if (x == 'q')
		{
			continue;
		}
		putchar(x);
	}
	putchar('\n');
	return (0);
}
