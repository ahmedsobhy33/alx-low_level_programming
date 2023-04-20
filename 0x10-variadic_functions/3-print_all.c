#include "variadic_functions.h"

/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, c = 0;
	char* str;
	const char t_arg[] = "cifs";
	va_list p;

	va_start(p, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(p, int)), c = 1;
			break;

			case 'i':
			printf("%d", va_arg(p, int)), c = 1;
			break;

			case 'f':
			printf("%f", va_arg(p, double)), c = 1;
			break;

			case 's':
			str = va_arg(p, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n");
	va_end(p);
}
