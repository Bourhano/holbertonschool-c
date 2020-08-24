#include "holberton.h"

/**
 * _strlen_recursion - Calculates the length of a string recursively
 * @s: string to be treated
 *
 * Return: length of @s
 **/
int _strlen_recursion(char *s)
{
        if (!*s)
                return (0);
        return (1 + _strlen_recursion(++s));
}

/**
 * is_palindrome_ - Checks if a string is a palindrome
 * @s: string to check
 * @l: length
 * @i: iterations
 *
 * Return: 1 if palindrome, 0 otherwise
 **/
int is_palindrome_(char *s, int l, int i)
{
	if (i == l / 2)
		return 1;
	return ((*(s + i) == *(s + l - i)) * is_palindrome_(s, l, i + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 **/
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	return (is_palindrome_(s, l - 1, 0));
}
