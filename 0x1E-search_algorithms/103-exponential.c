#include "search_header.h"

int search_helper_function(int *array, int value,
			 size_t lower_index, size_t higher_index);
size_t min(size_t first_value, size_t second_value);


/**
 * search_helper_function - searches for a value in an integer array using a
 * binary search algorithm, not guaranteed to return lowest index if `value`
 * appears twice in `array` (modified from `binary_search`)
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @lower_index: starting index
 * @higher_index: ending index
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int search_helper_function(int *array, int value,
			 size_t lower_index, size_t higher_index)
{
	size_t middle_index;
	size_t i;

	if (!array)
		return (-1);

	while (lower_index <= higher_index)
	{
		middle_index = (lower_index + higher_index) / 2;
		printf("Searching in array: ");
		for (i = lower_index; i <= higher_index; i++)
			printf("%i%s", array[i], i == higher_index ? "\n" : ", ");
		if (array[middle_index] < value)
			lower_index = middle_index + 1;
		else if (array[middle_index] > value)
			higher_index = middle_index - 1;
		else
			return ((int)middle_index);
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using an exponential search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t lower_index, higher_index, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	lower_index = bound / 2;
	higher_index = min(bound, size - 1);
	/* 'found' message generated even if array[higher_index] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", lower_index, higher_index);
	return (search_helper_function(array, value, lower_index, higher_index));
}


/**
 * min - returns the smallest of two values
 * @first_value: first input value
 * @second_value: second input value
 *
 * Return: either first_value or second_value
 */
size_t min(size_t first_value, size_t second_value)
{
	return (first_value <= second_value ? first_value : second_value);
}