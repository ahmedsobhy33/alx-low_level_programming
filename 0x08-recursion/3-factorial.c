#include "main.h"

/**
 * factorial - this is the main function
 *
 * @n: is a number
 *
 * Return: 0 when succesfull
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
