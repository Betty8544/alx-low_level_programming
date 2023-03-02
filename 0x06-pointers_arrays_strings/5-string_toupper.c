#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @str: The string ponter
 *
 * Return: void
 */
char *string_toupper(char *str)
{
	int b = 0;

	while (str[b])
	{
		if (str[b] >= 'a' && str[b] <= 'z')
			str[b] -= 32;

		b++;
	}

	return (str);
}
