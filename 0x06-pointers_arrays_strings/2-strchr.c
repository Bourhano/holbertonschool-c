#include "holberton.h"

/**
 * _strchr - Locate character in string
 * @s: string to search into
 * @c: char  to find
 *
 * Return: the pointer to the first occurance of @c
 **/
char *_strchr(char *s, char c)
{
	while (*s && *s++ != c)
		;
	if (*(s - 1) == c)
		return (s - 1);
	else
		return (0);
}
