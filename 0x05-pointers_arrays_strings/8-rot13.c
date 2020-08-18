#include "holberton.h"

/**
 * rot13 - Change all lower case chars to upper
 * @s: string to edit
 *
 * Return: the pointer to the string
 **/
char *rot13(char *s)
{
	char *ptr = s, a;
	int khod3a;

	while (*ptr++)
	{
		khod3a = 1;
		a = *ptr;
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
			*ptr += 13;
		while (khod3a && (a + 13 > 'Z' || a + 13 > 'z'))
		{
			       *ptr -= 26;
			       khod3a = 0;
		}
	}
	return (s);
}
