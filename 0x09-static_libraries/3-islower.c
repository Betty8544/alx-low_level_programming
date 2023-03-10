#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 for lowercase character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	return (0);
}
