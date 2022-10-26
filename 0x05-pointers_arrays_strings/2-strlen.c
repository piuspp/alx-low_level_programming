#include "main.h"
/**
* _strlen - return the length of a string
* @s: char to check
* Description: this will return the lenght of the string
* Return: 0 is a success
*/
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
