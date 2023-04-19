#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: pointer to an array
 * @size: number of elements in the array
 * @cmp: pointer to function
 *
 * Return: index of the first element,and if no match,  -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}

