#include "search_header.h"

/**
 * linear_search - function to search for an array value using the
 * the linear search algorithm
 *
 * @array: the array that we are working on
 * @size: the size of the defined array
 * @value: the value that we want to search
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t size_index;

	if (array == NULL)
	{
		return (-1);
	}

	for (size_index = 0; size_index < size; size_index++)
	{
		printf("Value checked array[%li] = [%i]\n", size_index, array[size_index]);
		if (array[size_index] == value)
		{
			return (size_index);
		}
	}
	return (-1);
}
