#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pNeedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pNeedle = needle;

		while (*haystack != '\0' && *pNeedle != '\0' && *haystack == *pNeedle)
		{
			haystack++;
			pNeedle++;
		}
		if (!*pNeedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
