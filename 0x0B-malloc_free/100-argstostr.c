#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of a program.
 * @ac: count of argument.
 * @av: arguments.
 *
 * Return: NULL, if ac==0 or av==NULL
 * pointer to new string
 * NULL, if mem unavailable
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int argmnt, byte_count, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (argmnt = 0; argmnt < ac; argmnt++)
	{
		for (byte_count = 0; av[argmnt][byte_count]; byte_count++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (argmnt = 0; argmnt < ac; argmnt++)
	{
		for (byte_count = 0; av[argmnt][byte_count]; byte_count++)
			str[i++] = av[argmnt][byte_count];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}

