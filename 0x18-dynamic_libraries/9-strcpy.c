#include "main.h"

/**
 * *_strcpy -  copies a string to new location
 * @dest: the target location
 * @src: string taken from here
 *
 * Return: the des string value
 */

char *_strcpy(char *dest, char *src)
{
	int indx = -1;

	do {
		indx++;
		dest[indx] = src[indx];
	} while (src[indx] != '\0');

	return (dest);
}
