#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the result of multiplication of arguments
 * @argc: arguments count
 * @argv: array of strings of arguments passed to main
 *
 * Return: on success, result of multiplication
 * print error and return 1 if program does not receive 2 arguments
 */

int main(int argc, char *argv[])
{
	int mul;

	if ((argc - 1) != 2)
	{
		printf("%s\n", "Error");

		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mul);

	return (0);
}
