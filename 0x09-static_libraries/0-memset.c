#include "main.h"

/**
 * *_memset - this is the main function
 *
 * @s: Returns a pointer to the memory area
 * @b: constant byte
 * @n: ytes of the memory area pointed to by s
 *
 * Return: 0 when succesfull
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int si;

	for (si = 0; n > 0; si++, n--)
		s[si] = b;

	return (s);
}
