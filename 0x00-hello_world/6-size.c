#include <stdio.h>
/**
 * main - Prints the size of various data types
 * Return: 0 (This signifies success)
*/

int main(void)
{
	char u;
	int v;
	long int w;
	long long int x;
	float y;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(y));
	return (0);
}
