#include "holberton.h"

/**
 * _islower - Checks if a character is in lower case
 * @c: character to compare
 *
 * Description: Takes in a character to test on.
 * It runes all the lower letter alphabets comparing them
 * with the input character.
 * Return: 1 if the character is lowercase. 0 otherwise
 * Example:
 *    _islower('a'); --> 1
 *    _islower(100); --> 1
 **/
int _islower(int c)
{
	char testc = 'a';
	int islower = 0;

	while (!islower && testc != 'z' + 1)
	{
		islower = c == testc;
		testc++;
	}
	return (islower);
}
