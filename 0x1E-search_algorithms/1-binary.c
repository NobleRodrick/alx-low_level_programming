#include "search_header.h"

/**
 * binary_search - this function makes a search by dividing the array into
 * two equal parts, the concentrating search on one of those parts
 * @array: pointer to first element of array to search
 * @size: defines the number of elements found inside the array
 * @value: what we are searching for
 *
 * Return: the desired index, or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int low_index, middle_index, high_index;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	low_index = 0;
	high_index = size - 1;

	while (low_index <= high_index)
	{
		middle_index = (low_index + high_index) / 2;

		printf("Searching in array: ");
		for (x = low_index; x <= high_index; x++)
			printf("%i%s", array[x], x == high_index ? "\n" : ", ");

		if (array[middle_index] < value)
			low_index = middle_index + 1;
		else if (array[middle_index] > value)
			high_index = middle_index - 1;
		else
			return (middle_index);
	}

	return (-1);
}
