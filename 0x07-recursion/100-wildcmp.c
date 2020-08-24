#include "holberton.h"

/**
 * wildcmp - Compares @s1 to @s2 that uses *
 * @s1: string to check
 * @s2: model string
 *
 * Return: 1 if matches, 0 otherwise
 **/
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s2 == '*')
	{
		if (s2[1] == '*')
			return (wildcmp(s1, s2 + 1));
		if (*s1 == s2[1])
			return (wildcmp(s1 + 1, s2 + 2));
	}
	if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
