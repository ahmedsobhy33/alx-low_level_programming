#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (n == 0 || size == 0)
	{
		return (0);
	}
	while (size--)
		n[size] = c;
	return (n);
}
