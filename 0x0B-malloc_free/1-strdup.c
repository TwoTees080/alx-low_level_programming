#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a poiter to a duplicated string
 * @str: string to be duplicated
 *
 * Return: NULL if str is NULL
 * pointer to duplicated string
 * NULL, if insufficient memory
 */

char *_strdup(char *str)
{
	char *pStr;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;

	pStr = malloc(sizeof(char) * (j + 1));

	if (pStr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		pStr[i] = str[i];

	pStr[j] = '\0';

	return (pStr);
}
