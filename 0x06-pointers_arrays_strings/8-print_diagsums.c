#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints each of the sums of the diagonals of a matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix
 **/
void print_diagsums(int *a, int size)
{
	int i, j;
	long sumd1 = 0, sumd2 = 0;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sumd1 += a[i * size + j];
			if (i + j == size - 1)
				sumd2 += a[i * size + j];
		}
	printf("%ld, %ld\n", sumd1, sumd2);
}
