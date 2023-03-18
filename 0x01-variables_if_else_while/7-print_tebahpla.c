#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: 0 when succesfull
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
