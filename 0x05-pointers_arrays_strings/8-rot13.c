#include "holberton.h"

/**
 * replace - Replaces the char with corresponding R13 char
 * @c1: char to replace
 *
 * Return: replacement char
 **/
char replace(char c1)
{
	char *old = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
		*new = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	while (*old != c1)
	{
		old++;
		new++;
	}
	return (*new);
}

/**
 * rot13 - Change all lower case chars to upper
 * @s: string to edit
 *
 * Return: pointer to the string
 **/
char *rot13(char *s)
{
	char *ptr = s, a;

	while (*ptr)
	{
		a = *ptr;
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
			*ptr = replace(a);
		ptr++;
	}
	return (s);
}
