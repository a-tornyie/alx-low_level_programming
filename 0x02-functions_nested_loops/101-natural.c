#include <stdio.h>
/**
  * main - computes and prints the sum of all the multiples of
  * 3 or 5 below.
  * Return: No return.
  */

int main(void)
{
	int i, result;
	int lastNumber = 1024;

	for (i = 0; i < lastNumber; i++)
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	printf("%d\n", result);
	return (0);
}
