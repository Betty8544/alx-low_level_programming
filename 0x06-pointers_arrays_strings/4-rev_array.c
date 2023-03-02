#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: The pointer to an integer
 * @n: The number of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, b;

	for (b = n - 1; b >= n / 2; b--)
	{
		tmp = a[n - 1 - b];
		a[n - 1 - b] = a[b];
		a[b] = tmp;
	}
}
