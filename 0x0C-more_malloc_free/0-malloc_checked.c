#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer to allocate memory for
 *
 * Return: 98, status value if malloc fails,
 * pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pInt;

	pInt = malloc(b);
	if (pInt == NULL)
		exit(98);

	return (pInt);
}
