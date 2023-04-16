#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 *
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	int i, j;
	char *n;

	if (str == 0)
	{
		return (NULL);
	}
	for (j = 0 ; str[j] != '\0' ; j++)
	{
		;
	}

	n = malloc(sizeof(char) * (j + 1));

	if (n == 0)
	{
		return (NULL);
	}
	for (i = 0; *(str + i) != '\0'; i++)
	{
		*(n + i) = *(str + i);
	}
	*(n + i) = '\0';
	return (n);
}
