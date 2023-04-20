#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator between strings
 * @n: number of arguements
 *
 * Return: nothing, if separator is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printed_string;
	unsigned int i;
	char *strng;

	va_start(printed_string, n);

	for (i = 0; i < n; i++)
	{
		strng = va_arg(printed_string, char *);

		if (strng == NULL)
			printf("(nil)");
		else
			printf("%s", strng);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(printed_string);
	printf("\n");
}
