#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - this is the main function
 *
 * @n: is a num
 *
 * Return: 0 when succesfull
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - this is the main function
 *
 * @n: is a num
 * @i: is a num
 *
 * Return: 0 when succesfull
 */

int _sqrt(int n, int i)
{
	int sqrt;

	sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
