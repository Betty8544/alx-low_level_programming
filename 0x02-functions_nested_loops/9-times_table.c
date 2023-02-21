#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
				;
			else if ((a * b) < 10)
				_putchar(' ');
			else
				_putchar('0' + a * b / 10);

			_putchar('0' + a * b % 10);

			if (b < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

