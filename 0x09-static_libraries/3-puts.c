#include "main.h"

/**
 * _puts - prints the string followed by new line
 * @str: pointer to a string str
 *
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
