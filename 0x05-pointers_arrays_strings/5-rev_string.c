#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char final = s[0];
	int position = 0;
	int i;

	while (s[position] != '\0')
		position++;
	for (i = 0; i < position; i++)
	{
		position--;
		final = s[i];
		s[i] = s[position];
		s[position] = final;
	}
}
