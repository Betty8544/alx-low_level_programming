#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Pointer to a character s
 *
 * Return: void
 */
int _strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}

	return (len);
}

