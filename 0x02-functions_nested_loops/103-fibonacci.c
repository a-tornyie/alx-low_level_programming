#include <stdio.h>
/**
 * main - Starting point
 *
 * Return:0 (success)
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = a + b;
		a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
	return (0);
}
