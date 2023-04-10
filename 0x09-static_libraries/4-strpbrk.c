#include "main.h"

/**
 * *_strpbrk - this is the main function
 *
 * @s: str 1
 * @accept: str 2
 *
 * Return: 0 when succesfull
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *i;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		for (b = 0 ; accept[b] != '\0' ; b++)
		{
			if (s[a] == accept[b])
			{
				i = &s[a];
				return (i);
			}
		}
	}
	return (0);
}
