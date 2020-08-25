#include <stdio.h>
#include <stdlib.h>

/**
 * cashback - Calculates number of return coins
 * @cents: amount to cash back
 */
void cashback(int cents, int sum)
{
	while (cents)
	{
		if (cents >= 25)
		{
			cents -= 25;
			sum++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			sum++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			sum++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			sum++;
		}
		else
		{
			cents -= 1;
			sum++;
		}
	}
	printf("%d\n", sum);
}


/**
 * main - Entry point
 * @argc: arguments count
 * @argv: arguments contents
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int cents, sum = 0;

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
	cashback(cents, sum);
	return (0);
}
