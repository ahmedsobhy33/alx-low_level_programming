#include "main.h"

/**
 * _print_rev_recursion - this is the main function
 *
 * @s: is a string
 *
 * Return: 0 when succesfull
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
