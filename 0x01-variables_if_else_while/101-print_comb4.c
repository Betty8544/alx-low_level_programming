#include <stdio.h>

/**
 * main - prints combination of numbers
 *
 * Return: Always (Success);
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a < 10; ++a)
	{
		for (b = a + 1; b < 10; ++b)
		{
			for (c = b + 1; c < 10; ++c)
			{
				putchar('0' + a);
				putchar('o' + b);
				putchar('0' + c);

				if (a != 7 || b != 8 || c != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

	
