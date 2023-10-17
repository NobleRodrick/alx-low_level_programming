#include "main.h"
/**
 * _isalpha - checks for alphabet presence
 * @c: integer to be tested
 * Return: 1 in succes or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
