#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the min number of coins to make change
* for an amount of money
* @argc: number of arguments
* @argv: arguments
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	int total, counter;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = strtol(argv[1], &p, 10);
	counter = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					counter += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
			counter++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", counter);
	return (0);
}
