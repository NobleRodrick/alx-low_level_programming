#include "main.h"

/**
 * set_bit - gets bit on index specified by the keyword `index`
 * @n: indicates a decimal number
 * @index: index of bit
 * Return: 1 or -1 depending in execution route
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int bit = 1;

	if (index > 64)
		return (-1);

	bit = bit << index;
	*n = (*n | bit);
	return (1);
}
