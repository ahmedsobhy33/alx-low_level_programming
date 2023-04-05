#include "main.h"

/**
 * _pow_recursion - this is the main function
 *
 * @x: is a value
 * @y: is a raise of a value
 *
 * Return: 0 when succesfull
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
