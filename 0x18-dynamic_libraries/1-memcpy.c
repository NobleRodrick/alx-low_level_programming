#include "main.h"

/**
  * _memcpy - function copies an area of memeory
  * @dest:pointer to destination location
  * @src: source mem area
  * @n: bytes to copy
  *
  * Return: the pointer to dest.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
