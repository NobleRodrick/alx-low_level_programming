#include "main.h"

/**
 * _islower - tells us whether there is a lowr case char
 * c - the char
 * Return: 0 in failure and 1 in success
 */

int _islower(int c)
{
	if  (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
