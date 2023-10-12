#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int a, b;
	size_t len, sum;
	char *selection = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Right usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = selection[(len ^ 59) & 63];
	for (a = 0, sum = 0; a < len; a++)
		sum += argv[1][a];
	p[1] = selection[(sum ^ 79) & 63];
	for (a = 0, b = 1; a < len; a++)
		b *= argv[1][a];
	p[2] = selection[(b ^ 85) & 63];
	for (b = argv[1][0], a = 0; a < len; a++)
		if ((char)b <= argv[1][a])
			b = argv[1][a];
	srand(b ^ 14);
	p[3] = selection[rand() & 63];
	for (b = 0, a = 0; a < len; a++)
		b += argv[1][a] * argv[1][a];
	p[4] = selection[(b ^ 239) & 63];
	for (b = 0, a = 0; (char)a < argv[1][0]; a++)
		b = rand();
	p[5] = selection[(b ^ 229) & 63];
		printf("%s\n", p);
	return (0);
}
