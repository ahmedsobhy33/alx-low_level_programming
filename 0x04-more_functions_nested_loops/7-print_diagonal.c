#include "main.h"

/**
 * print_diagonal - check the code
 *
 * @n: is the number of times the character \ should be printed
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (space = 2 ; space <= i ; space++)
				_putchar(' ');
		_putchar('/');
		_putchar('\n');
		}
	}
}
