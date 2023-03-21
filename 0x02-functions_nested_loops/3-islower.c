#include "main.h"
/**
 * int _islower - Checks for lowercase characters and 
 * 1 if c is lowercase and 0 otherwisw
 *
 * Return: 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
