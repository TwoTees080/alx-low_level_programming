#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - call function to print result
 * @argc: num of arg
 * @argv: atguments
 *
 * Return: 0 or errors
 */

int main(int __attribute__((__unused__)) argc, char **argv)
{
	char temp = argv[2][0];
	int a = 0, num1 = 0, num2 = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (temp != '+' && temp != '-' && temp != '*'
	     && temp != '/' && temp != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	 num1 = atoi(argv[1]);
	 num2 = atoi(argv[3]);

	a = (get_op_func(argv[2]))(num1, num2);

	printf("%d\n", a);
	return (0);
}

