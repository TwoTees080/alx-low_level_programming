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
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		pStr = malloc(sizeof(char) * (i + 1));

	if (pStr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		pStr[j] = str[j];

	return (pStr);
}
