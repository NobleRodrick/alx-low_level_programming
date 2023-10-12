#include "lists.h"

/**
 * delete_dnodeint_at_index - will delete node at precise index of
 * doubly-linked list
 *
 * @head: pointer to head node
 * @index: new node index
 * Return: 1 if it succeeded, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp1;
	dlistint_t *temp2;
	unsigned int i;

	temp1 = *head;

	if (temp1 != NULL)
		while (temp1->prev != NULL)
	temp1 = temp1->prev;

	i = 0;

	while (temp1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = temp1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				temp2->next = temp1->next
				
				if (temp1->next != NULL)
					temp1->next->prev = temp2;
			}

			free(temp1);
			return (1);
		}
		temp2 = temp1;
		temp1 = temp1->next;
		i++;
	}

	return (-1);
}
