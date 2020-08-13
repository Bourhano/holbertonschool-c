#include "holberton.h"

/**
 * times_table - Prints the 9 times table
 **/
void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (n < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar(n + '0');
			}
			else
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
}
