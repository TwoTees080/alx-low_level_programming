#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of main function.
 * @argc: count of arguments supplied to the program.
 * @argv: An array of pointers to characters of the arguments.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int bytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	index = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (index < bytes)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;
		printf(" ");
		index++;
		address++;
	}

	printf("\n");

	return (0);
}
