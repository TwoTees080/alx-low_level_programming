#include "main.h"

/**
 * check_strlen - Returns the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */

int check_strlen(char *str)
{
	int len = 0;

	if (*(str + len))
	{
		len++;
		len += check_strlen(str + len);
	}

	return (len);
}

/**
 * validate_palindrome - Checks if a string is a palindrome.
 * @str: The string to be checked.
 * @len: The length of s.
 * @index: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int validate_palindrome(char *str, int len, int index)
{
	if (str[index] == str[len / 2])
		return (1);

	if (str[index] == str[len - index - 1])
		return (validate_palindrome(str, len, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = check_strlen(s);

	if (!(*s))
		return (1);

	return (validate_palindrome(s, len, index));
}
