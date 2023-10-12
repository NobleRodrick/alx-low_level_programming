#include "lists.h"

/**
 * dlistint_len - gives the number of elements 
 * in a doubly linked list
 *
 * @h: pointer to head
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	if (h == NULL)
		return (number);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}

	return (number);
}
