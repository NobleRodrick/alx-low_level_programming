#include "main.h"

/**
 * _memset -will fill memory with constant variable
 * @s: pointer to char parameters
 * @b: the byte we will use
 * @n: byte of mem area
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
