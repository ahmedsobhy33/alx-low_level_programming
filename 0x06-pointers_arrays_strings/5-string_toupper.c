#include "main.h"

/**
 * *string_toupper - this is the main function
 *
 * @str: input string
 *
 * Return: 0 when succesfull
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
