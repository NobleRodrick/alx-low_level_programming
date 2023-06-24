#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: 0(success)
 */

int main(void)
{
	int i = 48;
	int j;
	int k;
	int cal = 44;

	while (i <= 57)
	{
		j = i + 1;
		while (j <= 57)
		{
			k = j + 1;
			while (k <= 57)
			{
				putchar (i);
				putchar (j);
				putchar (k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar (cal);
					putchar (32);
				}
				k += 1;
			}
			j += 1;
		}
		i += 1;
	}
	putchar ('\n');
	return (0);
}
