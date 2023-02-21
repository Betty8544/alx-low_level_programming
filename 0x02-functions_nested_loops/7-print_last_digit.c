#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to be computed
 *
 * Return: The last digit of the number
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -1 * n;

	_putchar('0' + n);
	return (n);
}
