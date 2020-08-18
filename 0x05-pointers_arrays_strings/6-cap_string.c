#include "holberton.h"

/**
 * cap_string - Capitalize all words of a string
 * @s: string to edit
 *
 * Return: the pointer to the string
 **/
char *cap_string(char *s)
{
	char *ptr = s, special = " \t\n,;.!?\"(){}";

	while (*ptr++)
		if (*ptr == special)
		{
			*ptr -= 'a';
			*ptr += 'A';
		}
	return (s);
}
