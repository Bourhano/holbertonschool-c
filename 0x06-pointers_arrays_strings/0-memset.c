#include "holberton.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: address to be filled
 * @b: constant byte to fill with
 * @n: number of bytes
 *
 * Return: the pointer to the memory area
 **/
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n-- > 0)
		*s++ = b;
	return (start);
}
