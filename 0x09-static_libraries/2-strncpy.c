#include "main.h"

/**
 * _strncpy - this is the main function
 *
 * @dest: input1
 * @src: input2
 * @n: bytes from src
 *
 * Return: 0 when succesfull
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
