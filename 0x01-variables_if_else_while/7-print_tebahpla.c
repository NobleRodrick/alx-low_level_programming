#include<stdio.h>

/**
 * main - Prints the lowercase of the alphabet in reverse order
 * Return: Always 0 
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		--ch;
	}
	putchar('\n');

	return (0);
}
