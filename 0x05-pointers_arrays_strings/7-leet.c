#include "holberton.h"

/**
 * replace - Replaces the chars c1 and c2 in s with c3
 * @c1: first char to replace
 * @c2: second char to replace
 * @c3: char to put in place of c1 and c2
 * @s: string to alter
 **/
void replace(char c1, char c2, char c3, char *s)
{
	while (*s++ != '\0')
		if (*s == c1 || *s == c2)
			*s = c3;
}

/**
 * leet - Write the string in the 'leet' slang
 * @s: text to edit
 *
 * Return: the pointer to the string
 **/
char *leet(char *s)
{
	replace('a', 'A', '4', s);
	replace('e', 'E', '3', s);
	replace('l', 'L', '1', s);
	replace('t', 'T', '7', s);
	replace('o', 'O', '0', s);
	return (s);
}
