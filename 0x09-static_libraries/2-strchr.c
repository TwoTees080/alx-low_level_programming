#include "main.h"

/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	unsigned int j;

	for (j = 0; *(s + j) != '\0'; j++)
		if (*(s + j) == c)
			return (s + j);
	if (*(s + j) == c)
		return (s + j);
	return ('\0');
}
