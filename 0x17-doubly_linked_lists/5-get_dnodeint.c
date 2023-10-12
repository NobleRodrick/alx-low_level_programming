#include "lists.h"

/**
 * get_dnodeint_at_index - gives the node at specific indx in a
 * singly-linked list
 * @head: pointer to head node
 * @index: the precised index
 * Return: the specific node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int list_size;
	dlistint_t *temp;

	list_size = 0;
	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == list_size)
			return (temp);
		list_size++;
		temp = temp->next;
	}
	return (NULL);
}
