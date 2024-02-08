#include "search_header.h"
#include <math.h>

/* note: Compiling math.h with gcc requires -lm */

size_t min(size_t first_value, size_t second_value);


/**
 * jump_search - searches for an array value using the jump
 * search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: what we are searching for the index
 *
 * Return: first index containing value, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t lower_index, higher_index, jump_step;

	if (!array || size == 0)
		return (-1);

	jump_step = sqrt(size);

	for (higher_index = 0; higher_index < size && array[higher_index] < value;
	     lower_index = higher_index, higher_index += jump_step)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       higher_index, array[higher_index]);
	}

	/* causes 'found' message even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", lower_index, higher_index);

	for (; lower_index <= min(higher_index, size - 1); lower_index++)
	{
		printf("Value checked array[%lu] = [%d]\n", lower_index, array[lower_index]);
		if (array[lower_index] == value)
			return (lower_index);
	}

	return (-1);
}

/**
 * min -  function returns the minimum of two size_t values
 * @first_value: first defined value
 * @second_value: second defined value
 *
 * Return: the larger of the two values
 */
size_t min(size_t first_value, size_t second_value)
{
	return (first_value <= second_value ? first_value : second_value);
}