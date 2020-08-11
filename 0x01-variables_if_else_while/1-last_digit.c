#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - last digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	printf("Last digit of %d is %d and is ", n, a);
	if (a > 5)
	{
		printf("greater than 5\n");
	}
	else if (a < 6 && a != 0)
	{
		printf("less than 6 and not 0\n");
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
