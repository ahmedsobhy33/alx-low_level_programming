#include "main.h"
#include <stdio.h>

/**
 * isLower - this is the main function
 *
 * @c: is char
 * Return: 1 when succesfull, 0 when fail
 */

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isD - this is the main function
 *
 * @c: is char
 *
 * Return: 1 when succesfull, 0 when fail
 */

int isD(char c)
{
	int i;
	char d[] = " \t\n,.!?\"(){}";

	for (i = 0 ; i < 12 ; i++)
		if (c == d[i])
			return (1);
	return (0);
}

/**
 * *cap_string - this is the main function
 *
 * @s: is string
 * Return: 1 when succesfull, 0 when fail
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int f = 1;

	while (*s)
	{
		if (isD(*s))
			f = 1;
		else if (isLower(*s) && f)
		{
			*s -= 32;
			f = 0;
		}
		else
			f = 0;
		s++;
	}
	return (ptr);
}
