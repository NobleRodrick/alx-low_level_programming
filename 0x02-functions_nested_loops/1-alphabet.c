#include "main.h"
/**
 * code to print the alphabet
 * Prints al te letters of the alphabet in lowercase followed by a new line.
 * Return
 */
void print_alphabet(void)
{
	char chr;

	chr = 'a';

	while (chr <= 'z')
	{
		_putchar(chr);
		chr++;
	}

	_putchar('\n');
}
