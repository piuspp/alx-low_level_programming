#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Description: prints the alphabet in lowercase\n
* Return: Always 0 (success)
*/
int main(void)

{
	int x;

	for (x = 'a'; x < 'z'; x++)
	{
		putchar(x);
	}
		putchar('\n');
	return (0);
}
