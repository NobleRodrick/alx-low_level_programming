#include "lists.h"

/**
 * print_dlistint - prints the elements of a singly_linked list
 *
 * @h: pointer to head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int number = 0;

	if (h == NULL)
		return (number);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
