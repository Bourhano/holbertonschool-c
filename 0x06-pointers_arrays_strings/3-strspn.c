#include "holberton.h"

/**
 * isincluded - Check presence of @c in @accept
 * @c: character to check
 * @accept: characters to check
 *
 * Return: true (1) if found, 0 else
 **/
int isincluded(char c, char *accept)
{
	while (*accept && *accept++ != c)
		;
	if (*(accept - 1) == c)
		return (1);
	else
		return (0);
}

/**
 * _strspn - Number of consecutive characters in string @s formed by @accept
 * @s: string to search into
 * @accept: characters to check
 *
 * Return: number of consecutive characters found in s
 **/
unsigned int _strspn(char *s, char *accept)
{
	int accepted = 0;

	if (accept[0] == '\0')
		return (0);
	while (*s != 0 && !accepted)
	{
		while (isincluded(*s, accept))
		{
			s++;
			accepted++;
		}
	}
	return (accepted);
}
