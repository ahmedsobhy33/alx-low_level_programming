#include "variadic_functions.h"

/**
 * print_numbers - Entry Point
 * @separator: comma space
 * @n: elements to be printed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list p;

	va_start(p, n);
	while (i++)
	{
		printf("%d", va_arg(p, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
