#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: the input by user
 * Return: 1 if isdigit, 0 in otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
