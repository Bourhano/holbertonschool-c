#include "holberton.h"

/**
 * _strlen - Calculates the length of a string recursively
 * @s: string to be treated
 *
 * Return: length of @s
 **/
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}
