#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 to indicate success
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	putchar('\n');

	return (0);
}
