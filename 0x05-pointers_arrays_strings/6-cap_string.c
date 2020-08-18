#include "holberton.h"

/**
 * cap_string - Capitalize all words of a string
 * @s: string to edit
 *
 * Return: the pointer to the string
 **/
char *cap_string(char *s)
{
	char c, *ptr = s, special[13] = " \t\n,;.!?\"(){}";
	int i;

	if (*ptr >= 'a' && *ptr <= 'z')
	{
		*ptr -= 'a';
		*ptr += 'A';
	}
	while (*ptr++)
	{
		c = *(ptr + 1);
		for (i = 0; i < 13; i++)
			if (*ptr == special[i] && c >= 'a' && c <= 'z')
			{
				*(ptr + 1) -= 'a';
				*(ptr + 1) += 'A';
			}
	}
	return (s);
}
