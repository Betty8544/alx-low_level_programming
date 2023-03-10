#include "main.h"

/**
 * _abs - computes th absolute value integer
 * @n: The number to be computed
 *
 * Return: zero.
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;

		return (abs_val);
	}

	return (n);
}
