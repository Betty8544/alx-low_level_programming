#include <stdio.h>

/**
 * main - prints single digit numbers
 *
 * Return: Always (Success);
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);

		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
