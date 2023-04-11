#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *str_concat;
	int i, concat_index = 0, j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		j++;

	str_concat = malloc(sizeof(char) * j);

	if (str_concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str_concat[concat_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		str_concat[concat_index++] = s2[i];

	return (str_concat);
}

