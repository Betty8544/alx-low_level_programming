#include "main.h"

/**
 * _puts - prints the string followed by new line
 * @str: pointer to a string str
 *
 * Return: void
 */
void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
