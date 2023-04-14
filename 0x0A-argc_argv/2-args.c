#include <stdio.h>

/**
 * main - prints all arguments received including first one
 * @argc: arguments count
 * @argv: array of arguments received in string format
 *
 * Return: Always (0)
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
