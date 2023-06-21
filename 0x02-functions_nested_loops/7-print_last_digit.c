#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - print the last digit of a number
 * @i: integer variable
 * Return: Always 0 (Success)
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num / 10;
	return (last_digit);
}
