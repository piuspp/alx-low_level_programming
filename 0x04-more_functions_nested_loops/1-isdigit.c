#include "main.h"
/**
 * _isdigit - to check is number is a digit
 * @c: char to check
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	c = 0;

	if (c <= 9)
		return (1);
	else
		return (0);
}
