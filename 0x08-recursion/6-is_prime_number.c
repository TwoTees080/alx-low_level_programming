#include "main.h"

/**
 * check_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @divisor: The divisor.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */

int check_divisible(int num, int divisor)
{
	if (num % divisor == 0)
		return (0);

	if (divisor == num / 2)
		return (1);

	return (check_divisible(num, divisor + 1));
}

/**
 * is_prime_number - Checks if a given number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (check_divisible(n, div));
}
