#include "lists.h"
/**
 *dlistint_len -  returns the number of elements in a linked list
 *@h: pointer to double linked list
 *Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
