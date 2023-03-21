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
	unsigned int char_count = 0;

	printf("%u", a);
	char_count += snprintf(NULL, 0, "%u", a);
	for (i = 1; char_count < 1244; i++)
	{
		printf(", %u", b);
		char_count += snprintf(NULL, 0, ", %u", b);
		c = a + b;
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
