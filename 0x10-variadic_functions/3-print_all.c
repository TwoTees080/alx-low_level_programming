#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - prints a character.
 * @arg: list of arguments pointing to
 *       the character to be printed.
 */

void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - prints an integer.
 * @arg: list of arguments pointing to
 *       the integer to be printed.
 */

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - prints a float.
 * @arg: list of arguments pointing to
 *       the float to be printed.
 */

void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - prints a string.
 * @arg: list of arguments pointing to
 *       the string to be printed.
 */

void print_string(va_list arg)
{
	char *strng;

	strng = va_arg(arg, char *);

	if (strng == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", strng);
}

/**
 * print_all - prints anything, followed by a new line.
 * @format: string of characters representing the argument types.
 * @...: variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int,
 *				float, or char * is ignored.
 *              If string argument is NULL, (nil) is printed instead.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	op_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;

		while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].f(args);
			separator = ", ";
		}

		i++;
	}

	printf("\n");

	va_end(args);
}

