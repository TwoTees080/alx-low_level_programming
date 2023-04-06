#include "main.h"

/**
 * _pow_recursion - function that returns the power of x over y
 * @x: the number to raise
 * @y: the number to be raised by
 *
 * Return:-1 if y is lower than 0 to indicate error
 * power of x if y is greater or equal to 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
