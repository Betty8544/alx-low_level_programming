#include <stdio.h>

/**
 * main - prints numbers of base16
 *
 * Return: Always (Success)
 */
int main(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		putchar(b);
	}

	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}
