#include "main.h"
/**
 * _puts - substitute for printf, prints some output
 * @str: the string to b printed
 * Return: nothing
*/


void _puts(char *str)
{
	int index = 0;
	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
