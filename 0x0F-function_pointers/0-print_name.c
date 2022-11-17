#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints the name of the function
 * @name: pointer to the name
 * @f: funtion pointer
 */

void print_name(char *name, void (*f)(char *));
{
	if(!name || !f)
		return;
	f(name);
}


