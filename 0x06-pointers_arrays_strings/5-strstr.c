#include "holberton.h"

/**
 * _strstr - Find substring inside a string
 * @s: string to search into
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring, NULL if not found
 **/
char *_strstr(char *s, char *needle)
{
	int found = 0;
	char *first, *need, *search;

	if (s[0] == '\0')
		return (0);
	while (*s && !found)
	{
		need = needle;
		if (*s == *need)
		{
			found = !found;
			first = s;
			search = s;
			search++;
			need++;
			while (*need && found)
			{
				found = *search++ == *need;
				need++;
			}
		}
		s++;
	}
	if (found)
		return (first);
	else
		return (0);
}
