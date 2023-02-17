#include <stdio.h>

/**
 * main - prints combination of two digits
 *
 * Return: Always (Success);
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 10; ++a)
	{
		for (b = a + 1; b < 10; ++b)
		{
			putchar('0' + a);
			putchar('0' + b);

			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
