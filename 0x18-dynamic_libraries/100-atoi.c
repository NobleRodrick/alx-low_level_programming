/**
* _atoi - function converts a string to an int
* @s: the string we are dealing wth
*
* Return: a converted iteger
*/
int _atoi(char *s)
{
	int i = 1;
	unsigned int number = 0;
	do {
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			number = number * 10 + (*s - '0');
		else if (number > 0)
			break;
	} while (*s++);
		return (number *i);
}
