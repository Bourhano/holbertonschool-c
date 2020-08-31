#include "holberton.h"

/**
 * malloc_checked - allocates memory of size @b
 * @b: size to allocate
 *
 * Return: pointer to the allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == 0) /* NULL*/
		exit(98);
	return (p);
}
