#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is the main function
 *
 * @argc: is an int
 * @argv: is an array
 *
 * Return: 0 when succesfull
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
