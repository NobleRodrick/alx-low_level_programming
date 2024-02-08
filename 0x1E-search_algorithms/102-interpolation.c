#include "search_header.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using an interpolation search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lower_index = 0;
	size_t higher_index = size - 1;
	size_t search_position;

	if (!array)
		return (-1);

	while ((array[higher_index] != array[lower_index]) &&
	       (value >= array[lower_index]) && (value <= array[higher_index]))
	{
		search_position = lower_index + (((double)(higher_index - lower_index) / (array[higher_index] - array[lower_index]))
			    * (value - array[lower_index]));
		printf("Value checked array[%lu] = [%d]\n", search_position, array[search_position]);
		if (array[search_position] < value)
			lower_index = search_position + 1;
		else if (value < array[search_position])
			higher_index = search_position - 1;
		else
			return (search_position);
	}
	if (value == array[lower_index])
	{
		printf("Value checked array[%lu] = [%d]\n", lower_index, array[lower_index]);
		return (lower_index);
	}
	search_position = lower_index + (((double)(higher_index - lower_index) / (array[higher_index] - array[lower_index]))
		     * (value - array[lower_index]));
	printf("Value checked array[%lu] is out of range\n", search_position);
	return (-1);
}
