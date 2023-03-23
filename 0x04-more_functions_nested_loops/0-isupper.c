#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase letters
 * @c: character to be checked
 * Return: 1 if character is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c > 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
