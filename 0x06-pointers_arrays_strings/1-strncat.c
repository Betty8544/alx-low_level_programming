#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: The source
 * @dest: The destination
 *
 * Return: Destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, dest_len = 0;

	while (dest[a++])
		dest_len++;

	for (a = 0; src[a] && a < n; a++)
		dest[dest_len++] = src[a];

	return (dest);
}
