#include <stdio.h>
#include "main.h"

int _isprime(int n, int i);

/**
 * is_prime_number - this is the main function
 *
 * @n: is a num
 *
 * Return: 0 when succesfull
 */

int is_prime_number(int n)
{
	return (_isprime(n, 1));
}

/**
 * _isprime - this is the main function
 *
 * @n: is a num
 * @i: is a num
 *
 * Return: 0 when succesfull
 */

int _isprime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (_isprime(n, i + 1));
}
