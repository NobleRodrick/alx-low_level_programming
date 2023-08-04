#include "main.h"

/**
 * get_bit - will give the value of a bit at a specified index
 * @n: gives the number in decimal form
 * @index: indicates the index of specified digit
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
