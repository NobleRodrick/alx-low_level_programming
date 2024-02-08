#include "search_header.h"

/**
 * jump_list - search algorithm using the jump algorithm
 * @list: head pointer to our linked list
 * @size: node number of the list(size)(length)
 * @value: our search value
 *
 * Return: absence of value or list head - NULL.
 *         Otherwise, pointer to first credible list_node
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step;
	size_t step_width;
	listint_t *list_node;
	listint_t *jump_step;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_width = sqrt(size);
	for (list_node = jump_step = list; jump_step->index + 1 < size && jump_step->n < value;)
	{
		list_node = jump_step;
		for (step += step_width; jump_step->index < step; jump_step = jump_step->next)
		{
			if (jump_step->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump_step->index, jump_step->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			list_node->index, jump_step->index);

	for (; list_node->index < jump_step->index && list_node->n < value; list_node = list_node->next)
		printf("Value checked at index [%ld] = [%d]\n", list_node->index, list_node->n);
	printf("Value checked at index [%ld] = [%d]\n", list_node->index, list_node->n);

	return (list_node->n == value ? list_node : NULL);
}
