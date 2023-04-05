#include "main.h"

/**
 * _puts_recursion - this is the main function
 *
 * @s: is a string
 *
 * Return: 0 when succesfull
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
