#include "main.h"

/**
 * *_strstr - this is the main function
 *
 * @haystack: 1st string
 * @needle: 2nd string
 *
 * Return: 0 when succesfull
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b;
	char *i;

	for (a = 0 ; haystack[a] != '\0' ; a++)
	{
		for (b = 0 ; needle[b] == haystack[a] ; b++)
		{
			if (needle[b] != '\0')
			{
				i = &haystack[a];
				return (i);
			}
		}
	}
	return (0);
}
