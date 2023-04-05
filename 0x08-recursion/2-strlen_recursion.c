#include "main.h"

/**
 * _strlen_recursion - this is the main function
 *
 * @s: is a string
 *
 * Return: 0 when succesfull
 */

int _strlen_recursion(char *s)
{
	int g = 0;

	if (*s > '\0')
	{
		g += _strlen_recursion(s + 1) + 1;
	}
	return (g);
}
