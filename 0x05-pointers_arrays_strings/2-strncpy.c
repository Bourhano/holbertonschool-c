#include "holberton.h"

/**
 * _strncpy - Copy string src to dest adding NULL chars to reach n
 * @dest: the destination string
 * @src: the source string
 * @n: the nb of chars to add
 *
 * Return: the pointer to the dest string
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
