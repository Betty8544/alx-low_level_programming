#include "main.h"

/**
 * print_diagonal - draws diagonal line in the terminal
 * @n: The number of times \ will bw printed.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int line;
	int space;

	if (n > 0)
	{
		for (line = 0; line <= n; line++)
		{
			for (space = 0;

