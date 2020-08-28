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

	if (str == 0)
		return (NULL);
	while (*s++ != 0)
		l++;
	s = malloc((l + 1) * sizeof(char));
	if (s == 0) /* NULL */
		return (NULL);
	i = 0;
	while (i < l)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = 0;
	return (s);
}
