#include "main.h"

/**
 * print_triangle - prints triangles in the terminal
 * @size: The size of a triangle
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - a; b > 1; b--)
			{
				_putchar(' ');
			}

			for (c = 0; c <= a; c++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
