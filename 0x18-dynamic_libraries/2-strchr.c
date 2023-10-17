#include "main.h"

/**
  * _strchr - function to locate char in a string
  * @s: the string we are given
  * @c: cahr to find inthe string
  *
  * Return: the char
  */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
