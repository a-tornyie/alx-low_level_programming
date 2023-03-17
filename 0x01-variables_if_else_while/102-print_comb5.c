#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num1 = 0, num2 = 1, num1Max = 98, num2Max = 99;

	while (num1 <= num1Max)
	{
		num2 = num1 + 1;
		while (num2 <= num2Max)
		{
			putchar(num1 < 9 ? 0 + '0' : (num1 / 10) + '0');
			putchar(num1 < 9 ? num1 + '0' : (num1 % 10) + '0');
			putchar(' ');
			putchar(num2 < 9 ? 0 + '0' : (num2 / 10) + '0');
			putchar(num2 < 9 ? num2 + '0' : (num2 % 10) + '0');
			if (num1 != num1Max)
			{
				putchar(',');
				putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
