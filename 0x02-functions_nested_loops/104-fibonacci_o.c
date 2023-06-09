#include <stdio.h>
/**
 * main - Starting point
 *
 * Return: 0 (success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2 = 0;
	unsigned long int aft1;
	unsigned long int aft2 = 0;

	printf("%lu", bef);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	bef1 = bef / l;
	bef2 = bef % l;
	aft1 = aft / l;
	aft2 = aft % l;
	for (i = 92; i < 99; ++i)
	{
		printf(", %09lu", aft1);
		printf("%09lu", aft2);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
