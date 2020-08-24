#include "holberton.h"

/**
 * is_prime_number_ - Checks if @n is prime, recursively
 * @n: integer to check
 * @i: counter
 *
 * Return: 1 if prime, 0 otherwise
 **/
int is_prime_number_(int n, int i)
{
	if (n == 0 || n == 1 || n < 0)
		return (0);
	if (i == n)
		return (1);
	return (!(n % i == 0) * is_prime_number_(n, i + 1));
}

/**
 * is_prime_number - Checks if @n is prime, recursively
 * @n: integer to check
 *
 * Return: 1 if prime, 0 otherwise
 **/
int is_prime_number(int n)
{
	return (is_prime_number_(n, 2));
}
