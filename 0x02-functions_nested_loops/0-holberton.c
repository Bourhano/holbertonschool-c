#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *holberton = "Holberton\n";
	int i;

	/*
	 *l = sizeof(holberton);
	 *for(i = 0;i < l; i++)
	 *	_putchar(*(holberton+i));
	*/
	i = 0;
	while (holberton[i] != '\0')
	{
		_putchar(*(holberton + i));
		i++;
	}
	return (0);
}
