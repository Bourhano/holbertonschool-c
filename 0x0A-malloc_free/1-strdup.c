#include "holberton.h"

/**
 * _strdup - Creates a copy of a string
 * @str: original string
 *
 * Return: pointer to the beginning of the new string
 **/
char *_strdup(char *str)
{
	char *s = str;
	unsigned int i, l = 0;

	while (*s++ != 0)
		l++;
	s = malloc(l * sizeof(char));
	if (s == 0) /* NULL */
		return (NULL);
	i = 0;
	while (i < l)
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}
