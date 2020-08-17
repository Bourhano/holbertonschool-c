#include "holberton.h"

/**
 * _strcpy - Copy the string from src to dest
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the pointer to the dest string
 **/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return start;
}
