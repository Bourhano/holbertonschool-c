#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments contents
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cents, c10, c5, c2, c1, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	if (cents % 25 == 0)
	{
		sum += cents / 25;
		cents -= sum * 25;
	}
	if (cents % 10 == 0)
	{
		c10 =  cents / 10;
		sum += c10;
		cents -= c10 * 10;
	}
	if (cents % 5 == 0)
	{
		c5 = cents / 5;
		sum += c5;
		cents -= sum * 5;
	}
	if (cents % 2 == 0)
	{
		c2 = cents / 2;
		sum += c2;
		cents -= sum * 2;
	}
	if (cents % 1 == 0)
	{
		c1 = cents / 1;
		sum += c1;
		cents -= sum;
	}
	printf("%d\n", sum);
	return (0);
}
