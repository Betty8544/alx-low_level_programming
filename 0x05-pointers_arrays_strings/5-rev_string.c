#include "main.h"

/**
 * rev_string - reverse a string
 * @s: The string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, b, c;
	char *a, aux;

	a = s;

	while (s[b] != '\0')
	{
		b++;
	}

	for (c = 0; c < b; c++)
	{
		a++;
	}

	for (i = 0; i < (b / 2); i++)
	{
		aux = s[i];
		s[i] = *a;
		*a = aux;
		a--;
	}
}
