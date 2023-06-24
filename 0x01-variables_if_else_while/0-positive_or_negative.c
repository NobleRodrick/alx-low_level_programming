#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * We check whether the number is greater than 0 : POSITIVE.
 * if the number is less than 0: NEGATIVE
 * OTHERWISE: IS EQUAL TO ZERO
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
