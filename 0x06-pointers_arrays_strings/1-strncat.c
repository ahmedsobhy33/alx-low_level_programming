#include "main.h"

/**
 * _strncat - this is the main function
 *
 * @dest: input 1
 * @src: input 2
 * @n: bytes from src
 *
 * Return: 0 when succesfull
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;

	while (dest[c])
		c++;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
