#include "holberton.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 **/
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				_putchar('0');
				_putchar('0' + h);
			}
			else
			{
				_putchar('0' + h / 10);
				_putchar('0' + h % 10);
			}
			_putchar(':');
			if (m < 10)
			{
				_putchar('0');
				_putchar('0' + m);
			}
			else
			{
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			_putchar('\n');
		}
}
