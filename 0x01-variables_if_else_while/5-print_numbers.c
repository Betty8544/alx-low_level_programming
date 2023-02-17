#include <stdio.h>

/**
 * main - prints numbers
 *
 * Return: Always (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
