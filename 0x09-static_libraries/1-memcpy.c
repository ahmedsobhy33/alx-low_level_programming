#include "main.h"

/**
 * *_memcpy - this is the main function
 *
 * @dest: memory area
 * @src: memory area
 * @n: bytes
 *
 * Return: 0 when succesfull
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int si;

	for (si = 0 ; si < n ; si++)
		dest[si] = src[si];

	return (dest);
}
