#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: The digit to be computed
 *
 * Return: 1 if c is a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
