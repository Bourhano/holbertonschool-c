#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes to take from @s2
 *
 * Return: pointer to the result string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int l1 = 0, l2 = 0, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p = s1;
	while (*p++ != 0)
		l1++;
	p = s2;
	while (*p++ != 0)
		l2++;
	if (l2 > n)
		l2 = n;
	l = l1 + l2;
	p = malloc(l + 1);
	if (p == 0) /* NULL*/
		return (NULL);
	n = 0;
	while (n < l)
	{
		if (n < l1)
			p[n] = s1[n];
		else
			p[n] = s2[n - l1];
		n++;
	}
	p[l] = '\0';
	return (p);
}
