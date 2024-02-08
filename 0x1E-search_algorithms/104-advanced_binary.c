#include "search_header.h"

int advanced_binary_helper(int *array, int value,
			    size_t lower_index, size_t higher_index);

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using a binary search algorithm. Unlike `binary_search`, consistently
 * returns first appearance of `value` in array
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t lower_index = 0;
	size_t higher_index = size - 1;

	if (!array)
		return (-1);

	return (advanced_binary_helper(array, value, lower_index, higher_index));
}


/**
 * advanced_binary_helper - helper to `advanced_binary`, recursively searches
 * for a value in an integer array
 * @array: pointer to first array element
 * @value: value to search for
 * @lower_index: starting index in array
 * @higher_index: ending index in array
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int advanced_binary_helper(int *array, int value,
			    size_t lower_index, size_t higher_index)
{
	size_t middle_index;
	size_t i;

	if (!array)
		return (-1);

	middle_index = (lower_index + higher_index) / 2;
	printf("Searching in array: ");
	for (i = lower_index; i <= higher_index; i++)
		printf("%i%s", array[i], i == higher_index ? "\n" : ", ");

	if (array[lower_index] == value)
		return ((int)lower_index);

	if (array[lower_index] != array[higher_index])
	{
		if (array[middle_index] < value)
			return (advanced_binary_helper(array, value,
							middle_index + 1, higher_index));
		if (array[middle_index] >= value)
			return (advanced_binary_helper(array, value,
							lower_index, middle_index));
	}

	return (-1);
}
