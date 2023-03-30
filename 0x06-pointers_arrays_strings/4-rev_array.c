#include "main.h"

/**
 * reverse_array - this is the main function
 *
 * @a: input
 * @n: the number of elements of the array
 *
 * Return: 0 when succesfull
 */

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1) ; i < j ; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
