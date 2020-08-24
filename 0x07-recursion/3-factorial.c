#include "holberton.h"

/**
 * factorial - Calculates the factorial of an integer recursively
 * @n: integer to calculate factorial of
 *
 * Return: length factorial of @n
 **/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (!n)
		return (1);
	return (n * factorial(n - 1));
}
