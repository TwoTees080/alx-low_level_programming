#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters.
 * @size: size of the array
 * @c: character to initialize with
 *
 * Return: pointer to array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *pC;
	unsigned int i;

	i = 0;

	if (size == 0)
		return (NULL);

	pC = malloc(sizeof(c) * size);

	if (pC == NULL)
		return (NULL);

	while (i < size)
	{
		pC[i] = c;
		i++;
	}

	return (pC);
}
