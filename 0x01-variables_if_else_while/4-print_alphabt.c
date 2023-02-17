#include <stdio.h>

/**
 * main - prints some alphabets
 *
 * Return: Always (Success)
 */
int main(void)
{
	char d;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d != 'e' && d != 'q')
		{
			putchar(d);
		}
	}

	putchar('\n');

	return (0);
}
