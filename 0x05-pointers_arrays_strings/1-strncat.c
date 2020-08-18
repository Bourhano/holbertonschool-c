#include "holberton.h"

/**
 * _strncat - Conctaenate the first n chars of string src to dest
 * @dest: the destination string
 * @src: the source string
 * @n: the limit of src
 *
 * Return: the pointer to the dest string
 **/
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;
	while (*src != '\0' && n > 0)
	{
		*ptr++ = *src++;
		n--;
	}
	if (n > 0)
		*ptr = '\0';
	return (dest);
}
