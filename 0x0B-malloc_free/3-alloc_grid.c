#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to a 2 dimensiaonsl array of int
 * @width: nimber of integer columns
 * @height: number of rows of integers
 *
 * Return: NULL on failure
 * NULL, if width and height is 0
 * return pointer
 */

int **alloc_grid(int width, int height)
{
	int **twoDArray;
	int height_index, width_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDArray = malloc(sizeof(int *) * height);

	if (twoDArray == NULL)
		return (NULL);

	for (height_index = 0; height_index < height; height_index++)
	{
		twoDArray[height_index] = malloc(sizeof(int) * width);

		if (twoDArray[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(twoDArray[height_index]);

			free(twoDArray);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			twoDArray[height_index][width_index] = 0;
	}

	return (twoDArray);
}
