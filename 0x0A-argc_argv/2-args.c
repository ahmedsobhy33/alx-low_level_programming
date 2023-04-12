#include <stdio.h>

/**
 * main - this is the main function
 *
 * @argc: is an int
 * @argv: is an array
 *
 * Return: 0 when succesfull
 */

int main(int argc, char const *argv[])
{
	int n = 0;

	while (argc--)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
