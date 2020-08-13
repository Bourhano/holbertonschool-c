#include "holberton.h"

/**
 * _isalpha - Checks if a character is an alphabetical char
 * @c: character to test
 *
 * Description: Takes in a character to test on.
 * It runs all the alphabetical chars comparing them
 * with the input character.
 * Return: 1 if the character is an alphabet. 0 otherwise
 * Example:
 *    _isalpha('a'); --> 1
 *    _isalpha(';'); --> 0
 **/
int _isalpha(int c)
{
	char testc = 'A';
	int isupper = 0;

	if (_islower(c))
		return (1);
	while (!isupper && testc != 'Z' + 1)
	{
		isupper = c == testc;
		testc++;
	}
	return (isupper);
}
