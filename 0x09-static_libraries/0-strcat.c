#include "main.h"

/**
 * _strcat -  concatenates two strings
 * @src: source
 * @dest: Destination
 *
 * Return: Destination
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, dest_len = 0;

	while (dest[a++])
		dest_len++;

	for (a = 0; src[a]; a++)
		dest[dest_len++] = src[a];

	return (dest);
}
