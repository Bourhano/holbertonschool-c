#include "holberton.h"

/**
 * str_concat - Concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the beginning of the new concat string
 **/
char *str_concat(char *s1, char *s2)
{
	char *s = s1;
	unsigned int i, l1 = 0, l2 = 0;

	if (s1 != 0)
		while (*s++ != 0)
			l1++;
	s = s2;
	if (s2 != 0)
		while (*s++ != 0)
			l2++;
	s = malloc((l1 + l2) * sizeof(char));
	if (s == 0) /* NULL */
		return (NULL);
	i = 0;
	if (!s1)
		while (i < l1)
		{
			s[i] = s1[i];
			i++;
		}
	if (!s2)
		while (i < l1 + l2)
		{
			s[i] = s2[i - l1];
			i++;
		}
	s[i] = 0;
	return (s);
}
