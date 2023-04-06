#include "main.h"

/**
 * _puts_recursion - function to print a string followed by a new line. using
 * recursion
 * @s: string
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(*s);
	_putchar(s + 1);
}
