#include "holberton.h"

/**
 * argstostr - concatenates all args
 * @ac: arg count
 * @av: arguments values
 *
 * Return: pointer to the cat string
 **/
char *argstostr(int ac, char **av)
{
	int i, l = 0;

	if ( ac == 0  || av == NULL)
		return (NULL);
	for (i = 0; i < ac - 1; i++)
		l++;
	return (NULL);
}
