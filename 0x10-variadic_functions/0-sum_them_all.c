#include "variadic_functions.h"

/**
 * sum_them_all - Entry Point
 * @n: variadic inputs
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list p;

	if (n == 0)
		return (0);
	va_start(p, n);
	while (i--)
		s += va_arg(p, int);
	va_end(p);
	return (s);
}
