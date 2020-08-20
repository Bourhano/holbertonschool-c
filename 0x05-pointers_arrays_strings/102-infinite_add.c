#include "holberton.h"

/**
 * print_number - Prints the input integer to stdout
 * @n: the number to be printed
 **/
void print_number(int n)
{
	int l = 0, i;
	char nbc[50];

	if (n < 0)
	{
		_putchar('-');
		print_number(-n);
	}
	else if (n == 0)
		_putchar('0');
	else
	{
		for ( ; n > 0 ; l++)
		{
			nbc[l] = n % 10;
			n /= 10;
		}
		for (i = l - 1; i >= 0; i--)
			_putchar('0' + *(nbc + i));
	}
}
