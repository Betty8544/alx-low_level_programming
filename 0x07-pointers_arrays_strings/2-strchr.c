#include "main.h"

/**
 * *_strchr -  locates a character in a string
 * @s: the string
 * @c: the chracter to be located
 *
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
