#include "holberton.h"

/**
 * rev_string - Reverts the input string
 * @s: the string to be reversed
 **/
void rev_string(char *s)
{
	int l = 0, i;
	char ex;

	while (*(s + l) != '\0')
		l++;
	l--;
	for (i = 0; i < l / 2; i++)
	{
		ex = s[i];
		s[i] = s[l - i];
		s[l - i] = ex;
	}
}
