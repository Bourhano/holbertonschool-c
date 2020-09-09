#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 * @n: the number to treat
 * @m: the second number
 *
 * Return: differences count
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n > 1 && m > 1)
		return (((n & 1) != (m & 1)) + flip_bits(n >> 1, m >> 1));
	return (m == n);
}
