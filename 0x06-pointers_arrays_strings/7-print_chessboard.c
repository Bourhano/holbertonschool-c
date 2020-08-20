#include "holberton.h"

/**
 * print_chessboard - Prints the input matrix of width 8
 * @a: the board to be printed
 **/
void print_chessboard(char (*a)[8])
{
	int i;

	while ((*a)[0])
	{
		for (i = 0; i < 8; i++)
			_putchar((*a)[i]);
		_putchar('\n');
		a++;
	}
}
