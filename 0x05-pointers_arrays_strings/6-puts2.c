#include "main.h"
/**
 * puts2 - prints only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int len = 0;
	int b = 0;
	char *a = str;
	int i;

	while (*a != '\0')
	{
		a++;
		len++;
	}

	b = len - 1;

	for (i = 0; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
