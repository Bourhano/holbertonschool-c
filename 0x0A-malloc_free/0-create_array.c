#include "holberton.h"

/**
 * create_array - Creates an array of chars (string)
 * @size: array length
 * @c: character to repeat
 *
 * Return: pointer to the beginning of the array
 **/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (!size)
		return (0); /* aka NULL */
	s = malloc(size * sizeof(char));
	if (s == 0) /* NULL*/
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
