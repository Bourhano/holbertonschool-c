#include "holberton.h"
#include <stdio.h>

/**
 * print_to _98 - Print numbers from n to 98
 * @n: starting number
 *
 * Description: Prints all numbers from n to 98 in order
 * Return: none
 **/
void print_to_98(int n)
{
	int i;

	if (n >= 98)
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	else
		for (i = n; i <= 98; i++)
			printf("%d, ", i);
	printf("98\n");
}
