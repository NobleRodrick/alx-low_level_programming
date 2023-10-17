#include "main.h"
/**
 * _strncpy - funtion to cpy string
 * @dest: ds location
 * @src: from where
 * @n: lenght to be copies
 * Return: the destination str
 */

char *_strncpy(char *dest, char *src, int n)
{
	int indx;

	for (indx = 0; indx < n && src[indx] != '\0'; indx++)
	{
		dest[indx] = src[indx];
	}
	while (indx < n)
	{
		dest[indx] = '\0';
		indx++;
	}
	return (dest);
}
