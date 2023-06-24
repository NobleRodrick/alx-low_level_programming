#include<stdio.h>

/**
 * main - Prints from 0-9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		++num;
	}
	printf("\n");

	return (0);
}
