#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 **/
void print_binary(unsigned long int n)
{
	unsigned int i, first = 0;

	if (n == 0)
		_putchar('0');
	for (i = 1 << 31; i > 0; i = i >> 1)
		if (n & i)
		{
			_putchar('1');
			first = 1;
		}
		else if (first)
			_putchar('0');
}
