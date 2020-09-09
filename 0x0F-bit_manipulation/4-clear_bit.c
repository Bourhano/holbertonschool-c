#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to treat
 * @index: the position of the desired bit
 *
 * Return: 1 if set, 0 if clear
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > n)
		return (-1);
	if (index == 0)
		return (n % 2);
	return ((n >> index) & 1);
}

/**
 * clear_bit - clears the bit at a given index
 * @n: the number to treat
 * @index: the position of the desired bit
 *
 * Return: 1 on success, -1 else
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b, mul = 1;

	if (index > *n)
		return (-1);
	for (b = 0; b < index; b++)
		mul *= 2;
	if (get_bit(*n, index) == 0)
		*n = *n - mul;
	return (1);
}
