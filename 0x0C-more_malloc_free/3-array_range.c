#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * ordered from min to max.
 * @min: first array alue.
 * @max: last array value.
 *
 * Return: pointer to the newly created array.
 * else if man > mix, returns NULL.
 * or if malloc fails, returns NULL.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}
