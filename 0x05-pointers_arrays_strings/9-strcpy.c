#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination
 * @src: source
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	dest[a++] = '\0';

	return (dest);
}
