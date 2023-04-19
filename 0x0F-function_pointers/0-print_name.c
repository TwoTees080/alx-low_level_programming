#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - program that prints a name
 * @name: pointer to name of person
 * @f: pointer to function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
