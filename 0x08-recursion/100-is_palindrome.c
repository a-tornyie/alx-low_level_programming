#include "main.h"

int check(char *s, int i, int len);
int string_len(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 *
 * Return: 1 if it is, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, string_len(s)));
}

/**
 * string_len - returns the length of a string
 * @s: string
 *
 * Return: string length
 */

int string_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_len(s + 1));
}

/**
 * check - checks the characters recursively for palindrome
 * @s: string
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
