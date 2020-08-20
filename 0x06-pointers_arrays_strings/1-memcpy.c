#include "holberton.h"

/**
 * _memcpy - Copy memory area
 * @dest: address to be filled
 * @src: constant byte to fill with
 * @n: number of bytes
 *
 * Return: the pointer to the destinatiom memory area
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n-- > 0)
		*dest++ = *src++;
	return (start);
}
