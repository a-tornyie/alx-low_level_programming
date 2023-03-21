#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: No return
 */

void times_table(void)
{
	int i = 0;
	int j;
	int rep;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			rep = i * j;
			if (j == 0)
			{
				_putchar('0' + rep);
			}
			else if (rep < 10)
			{
				_putchar(' ');
				_putchar('0' + rep);
			}
			else
			{
				_putchar('0' + rep / 10);
				_putchar('0' + rep % 10);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;

	}
}
