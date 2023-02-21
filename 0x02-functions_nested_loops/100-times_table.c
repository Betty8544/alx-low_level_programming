#include "main.h"

/**
 *  print_times_table - prints time table of dimention
 *  @n: Dimention of times table
 *
 *  Return: void
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n < 0 || n > 15)
		return;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if (b == 0)
			{
				_putchar('0');
			}
			else
			{
				c = a * b;
				_putchar((c < 100) ? ' ' : ('0' + c / 100));
				_putchar((c <  10) ? ' ' : ('0' + c / 10 % 10));
				_putchar('0' + c % 10);
			}

			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
