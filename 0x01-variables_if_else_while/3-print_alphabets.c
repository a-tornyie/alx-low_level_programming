#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char lowerAlphabet;
	char upperAlphabet;

	lowerAlphabet = 'a';
	upperAlphabet = 'A';
	while
		(lowerAlphabet <= 'z') {
			putchar(lowerAlphabet);
			lowerAlphabet++;
		}
	while
		(upperAlphabet <= 'Z') {
			putchar(upperAlphabet);
			upperAlphabet++;
		}
	putchar('\n');
	return (0);
}
