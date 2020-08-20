#include "holberton.h"

/**
 * print_number - Prints the input integer to stdout
 * @n: the number to be printed
 **/
void print_number(int n)
{
	int l = 0, i, exn = n, rm, print, cnt, j;

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
			n /= 10;
		for (i = l; i > 0; i--)
		{
			cnt = 1;
			for (j = 1 ; j < i; j++)
				cnt *= 10;
			print = exn / cnt;
			rm = print * cnt;
			exn -= rm;
			_putchar('0' + print);
		}
	}
}
