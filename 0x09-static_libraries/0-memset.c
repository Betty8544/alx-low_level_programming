#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: mmory area to be filled
 * @b: constant byte to be filled
 * @n: bytes of memory area to fill
 *
 * Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}

	return (s);
}
