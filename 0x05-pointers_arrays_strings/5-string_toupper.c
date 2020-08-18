#include "holberton.h"

/**
 * string_toupper - Change all lower case chars to upper
 * @s: string to edit
 *
 * Return: the pointer to the string
 **/
char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr++ != '\0')
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 'a';
			*ptr += 'A';
		}
	return (s);
}
