#include "holberton.h"

/**
 * print_times_table - Prints the n-th times table
 * @n: value of the biggest table to print
**/
void print_times_table(int n)
{
	int i, j, m;

	if (n > -1 && n < 16)
		for (i = 0; i <= n; i++)
			for (j = 0; j <= n; j++)
			{
				m = i * j;
				if (m < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(m + '0');
				}
				else if (m < 100)
				{
					if (j != 0)
						_putchar(' ');
					_putchar('0' + m / 10);
					_putchar('0' + m % 10);
				}
				else
				{
					_putchar('0' + m / 100);
					_putchar('0' + (m / 10) % 10);
					_putchar('0' + m % 10);
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
}
