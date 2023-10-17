#include "main.h"

/**
 * _strcat - joins two strings together
 * @dest: string destination
 * @src: string we will append
 *
 * Return: address of desttination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
