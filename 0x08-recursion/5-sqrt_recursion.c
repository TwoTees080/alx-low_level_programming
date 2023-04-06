#include "main.h"

/**
 * get_sqrt - finds the square root of a given number
 * @num: The number to find rhe squaree root of
 * @sqrt: square root to be tested
 *
 * Return: If number has a natural square - return the square
 * else return -1
 */

int get_sqrt(int num, int sqrt)
{
	if ((sqrt * sqrt) == num)
		return (sqrt);
	else if (sqrt == num / 2)
		return (-1);

	return (get_sqrt(num, sqrt + 1));
}

/**
 * _sqrt_recursion - Returns the natural square of a given number
 * @n: The number to return its square root
 *
 * Return: natural square root if n has natural squaroot
 * else -1
 */

int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);

	return (get_sqrt(n, sqrt));

}
