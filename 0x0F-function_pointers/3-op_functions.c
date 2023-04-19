#include "3-calc.h"

/**
* op_add - sums two numbers
* @a: first number
* @b: second number
*
* Return: result of sum of numbers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - finds difference of two numbers
* @a: first number
* @b: second number
*
* Return: result of substraction
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - finds product of two numbers
* @a: first number
* @b: second number
*
* Return: result of multiplication
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divides a number by another number
* @a: first number
* @b: second number
*
* Return: result of divison
*/

int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}

/**
* op_mod - find the remainder of division of a number by another
* @a: first number
* @b: second number
*
* Return: remainder of division
*/

int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
