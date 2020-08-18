#include "holberton.h"

/**
 * _strcmp - Compare the strings s1 and s2
 * @s1: the first string
 * @s2: the second string
 *
 * Return: value of the first difference between s1 and s2
 **/
int _strcmp(char *s1, char *s2)
{
	int diff = 0;

	while (!diff && *s1)
		diff = *s1++ - *s2++;
	return (diff);
}
