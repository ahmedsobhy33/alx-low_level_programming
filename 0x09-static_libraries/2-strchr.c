#include "main.h"

/**
 * *_strchr - this is the main function
 *
 * @s: is a string
 * @c: char in str s
 *
 * Return: 0 when succesfull
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
