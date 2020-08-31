#include "holberton.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: address to be filled
 * @b: constant byte to fill with
 * @n: number of bytes
 *
 * Return: the pointer to the memory area
 **/
void *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n-- > 0)
		*s++ = b;
	return (start);
}

/**
 * _calloc - allocate memory set to 0
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total = nmemb * size;
	void *p = malloc(total);

	if (!p || !total)
		return (NULL);
	return _memset(p, 0, total);
}
