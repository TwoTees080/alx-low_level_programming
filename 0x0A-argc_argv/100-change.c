#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make  a change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of characters of arguments.
 *
 * Return: If the number of arguments is not exactly one, return - 1.
 *         Otherwise - return 0.
 */

int main(int argc, char *argv[])
{
	int cents, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coin++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coin);

	return (0);
}


