#include "holberton.h"

/**
 * _abs - Returns abs value of an integer
 * @n: integer to test
 *
 * Return: |n| - absolute value of n
 **/
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
