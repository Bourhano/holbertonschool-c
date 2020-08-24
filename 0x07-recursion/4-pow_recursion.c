#include "holberton.h"

/**
 * _pow_recursion - Calculates the value of @x to the power @y
 * @x: integer to calculate its power
 * @y: power to raise to
 *
 * Return: @x to the power @y
 **/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
