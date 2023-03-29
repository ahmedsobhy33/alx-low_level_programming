#include "main.h"

/**
 * _strcat - this is the main function
 *
 * @dest: input1
 * @src: input2
 *
 * Return: dest when succesfull
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;

	for (b = 0 ; src[b] ; b++)
		dest[a++] = src[b];

	return (dest);
}
