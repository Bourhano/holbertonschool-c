#include "holberton.h"

/**
 * _strcat - Conctaenate the string src to dest
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the pointer to the dest string
 **/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;
	while (*src != '\0')
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}
