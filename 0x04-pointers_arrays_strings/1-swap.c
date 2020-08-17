#include "holberton.h"

/**
 * swap_int - Swaps the values of a and b
 * @a: first operand
 * @b: second operand
 **/
void swap_int(int *a, int *b)
{
	int ex;

	ex = *a;
	*a = *b;
	*b = ex;
}
