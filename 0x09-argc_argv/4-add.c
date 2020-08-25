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
	int i = 1 , j, ok = 1, sum = 0;

	while (ok && i < argc)
	{
		j = 0;
		while (argv[i][j] && ok)
		{
			ok = (*argv[i] >= '0'&& *argv[i] <= '9');
			j++;
		}
		i++;
	}
	if (!ok)
	{
		printf("Error\n");
		return (1);
	}
	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
