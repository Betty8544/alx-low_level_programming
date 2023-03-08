#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: an array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int b, d;

	for (b = 0; b < 8; b++)
	{
		for (d = 0; d < 8; d++)
		{
			_putchar(a[b][d]);
		}

		_putchar('\n');
	}
}