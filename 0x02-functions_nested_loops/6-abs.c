#include "main.h"

/**
 * _abs - check the code
 *
 * @a: check the parameter.
 *
 * Return: Always a.
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else
		a = a;
	return (a);
}
