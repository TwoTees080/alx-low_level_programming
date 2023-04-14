#include <stdio.h>

/**
 * main - prints the number of arguments passed into main
 * @argc: count of arguments passed
 * @argv: array of string values of arguments
 *
 * Return: Always (0)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc);

	return (0);
}
