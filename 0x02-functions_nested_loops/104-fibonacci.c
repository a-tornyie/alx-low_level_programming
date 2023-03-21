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
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int c;

	printf("%u", a);
	for (i = 1; i < n; i++)
	{
		printf(", %u", b);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
