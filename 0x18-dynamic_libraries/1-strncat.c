#include "main.h"
/**
 * _strncat - joins two strings of defined length
 * @dest: destination location
 * @src: source location
 * @n: length of string
 * Return: the ptr to destination location
 */
char *_strncat(char *dest, char *src, int n)
{
	int loc1 = 0, loc2 = 0;

	while (*(dest + loc1) != '\0')
	{
		loc1++;
	}

	while (loc2 < n)
	{
		*(dest + loc1) = *(src + loc2);
		if (*(src + loc2) == '\0')
			break;
		loc1++;
		loc2++;
	}
	return (dest);
}
