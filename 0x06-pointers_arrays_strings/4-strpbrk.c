#include "holberton.h"

/**
 * isincluded - Check presence of @c in @accept
 * @c: character to check
 * @accept: characters to check
 *
 * Return: address of found character
 **/
char *isincluded(char c, char *accept)
{
	while (*accept && *accept++ != c)
		;
	if (*(accept - 1) == c)
		return ((accept - 1));
	else
		return (0);
}

/**
 * _strpbrk - Find position of the first occurence of a char from @accept
 * @s: string to search into
 * @accept: characters to check
 *
 * Return: address of found char
 **/
char *_strpbrk(char *s, char *accept)
{
	int accepted = 0;

	if (accept[0] == '\0')
		return (0);
	while (*s != 0 && !accepted)
	{
		if (isincluded(*s, accept))
			return (s);
		s++;
	}
	return (0);
}
