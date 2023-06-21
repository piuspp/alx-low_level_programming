#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last digit of a number
 * @num: integer variable
 * Return: Always 0 (Success)
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (num < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
