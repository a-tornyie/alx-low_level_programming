#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char hexAlphabet;

	int num;

	hexAlphabet = 'a';
	num = 0;
	while
		(num < 10) {
			putchar(num + '0');
			num++;
		}
	while
		(hexAlphabet <= 'f') {
			putchar(hexAlphabet);
			hexAlphabet++;
		}
	putchar('\n');
	return (0);
}
