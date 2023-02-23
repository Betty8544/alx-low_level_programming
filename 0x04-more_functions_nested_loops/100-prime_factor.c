#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor
 *
 * Return: Always 0.
 */
int main(void)
{
	long a, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 0; a <= square; a++)
	{
		if (number % a == 0)
		{
			maxf = number / a;
		}
	}

	printf("%ld\n", maxf);

	return (0);
}
