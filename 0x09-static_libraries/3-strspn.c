#include "main.h"

/**
 * _strspn - this is the main function
 *
 * @s: str 1
 * @accept: str 2
 *
 * Return: 0 when succesfull
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		for (b = 0 ; accept[b] != s[a] ; b++)
		{
			if (accept[b] == '\0')
				return (a);
		}
	}
	return (a);
}
