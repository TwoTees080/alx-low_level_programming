#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed_num between given numbers
 * @n: number of arguements
 *
 * Return: Nothing, if separator is NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list printed_num;
	unsigned int i;

	va_start(printed_num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(printed_num, int));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(printed_num);
	printf("\n");
}
