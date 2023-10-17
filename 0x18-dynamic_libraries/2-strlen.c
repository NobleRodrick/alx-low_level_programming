#include "main.h"
/**
 * _strlen - gives the len of a defined string
 * @s: the string ptr
 * Return: nothing
*/


int _strlen(char *s)
{
	int counter = 0;

	while (s[counter])
		counter++;

	return (counter);
}
