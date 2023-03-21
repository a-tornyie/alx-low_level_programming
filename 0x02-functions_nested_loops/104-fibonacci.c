#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned int i;
	unsigned int n = 98;
	unsigned int a = 1, b = 2;

	printf("%u", a);
	for (i = 1; i < n; i++)
	{
		printf(", %u", b);
		unsigned int c = a + b;

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
