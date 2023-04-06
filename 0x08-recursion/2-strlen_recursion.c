#include "main.h"

/**
 * _strlen_recursion - function that returns length of a string
 * @s: string input
 *
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		count += _strlen_recursion(s + 1);
	}

	return (count);
}
