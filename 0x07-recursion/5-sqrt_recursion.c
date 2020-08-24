#include "holberton.h"

/**
 * _sqrt_recursion_ - Calculates the square root of @n
 * @n: integer to calculate its root
 * @i: counter
 *
 * Return: sqrt of @n if it is a natural number
 **/
int _sqrt_recursion_(int n, int i)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (i * i == n)
		return (i);
	if (i == n)
		return (-1);
	return (_sqrt_recursion_(n, ++i));
}

/**
 * _sqrt_recursion - Calculates the square root of @n
 * @n: integer to calculate its root
 *
 * Return: sqrt of @n if it is a natural number
 **/
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_(n, 0));
}
