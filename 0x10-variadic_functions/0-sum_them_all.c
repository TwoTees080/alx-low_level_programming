#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - program that sum of all its parameters
 * @n: number of arguements
 *
 * Return: 0, if n==0
 * else, sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	int total_sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(sum, n);

	for (i = 0; i < n; i++)
		total_sum += va_arg(sum, unsigned int);

	va_end(sum);

	return (total_sum);
}
