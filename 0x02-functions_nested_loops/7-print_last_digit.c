#include "holberton.h"

/**
 * print_last_digit - Returns and prints the last digit of an integer
 * @n: integer to test
 *
 * Return: last digit of the input number
 **/
int print_last_digit(int n)
{
	if (n == -2147483648)
		n = 8;
	else if (n < 0)
		n = -n;
	_putchar(n % 10 + '0');
	return (n % 10);
}
