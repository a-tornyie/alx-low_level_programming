#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while
		(alphabet <= 'z') {
			if ((alphabet != 'q' && alphabet != 'e') && alphabet <= 'z')
				putchar(alphabet);
			alphabet++;
		}
	putchar('\n');
	return (0);

}
