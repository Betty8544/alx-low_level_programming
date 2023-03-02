#include "main.h"

/**
 * _strncpy - copies a string
 * @src: The source
 * @dest: The destination
 * @n: The interger
 *
 * Return: Destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, src_len = 0;

	while (src[a++])
		src_len++;

	for (a = 0; src[a] && a < n; a++)
		dest[a] = src[a];

	for (a = src_len; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
