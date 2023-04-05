#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length.
 */

int _strlen_recursion(char *s)
{
	int the_length = 0;

	if (*s)
	{
		the_length++;
		the_length += _strlen_recursion(s + 1);
	}

	return (the_length);
}
