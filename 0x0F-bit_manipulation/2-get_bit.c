#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to treat
 * @index: the position of the desired bit
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > n)
		return (-1);
	if (index == 0)
		return (n % 2);
	return ((n >> index) & 1);
}
