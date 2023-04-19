#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function on elements of an array
 * @array: pointer to array to be iterated
 * @size: number of elements in array
 * @action: pointer to function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	j = 0;

	if (array != NULL && action != NULL)
	{
		while (j < size)
		{
			action(array[j]);
			j++;
		}
	}
}

