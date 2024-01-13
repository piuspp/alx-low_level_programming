#include "main.h"
/**
 * _islower - funtion to check for lowercase characters
 * @x: int that will be use for the argument
 * Return:0
 */
int _islower(int x)

{
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	else
		return (0);
}



