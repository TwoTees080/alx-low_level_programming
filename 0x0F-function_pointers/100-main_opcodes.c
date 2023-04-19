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
	int bytes_val, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes_val = atoi(argv[1]);

	if (bytes_val < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes_val; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == bytes_val - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
