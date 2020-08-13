#include "holberton.h"

/**
 * print_last_digit - Returns and prints the last digit of an integer
 * @n: integer to test
 *
 * Return: last digit of the input number
 **/
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar(n % 10 + '0');
	return (n % 10);
}
