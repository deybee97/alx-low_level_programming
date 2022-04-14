#include <stdio.h>

/**
 * main - fizzbuzz
 *
 * Return: 0
 */

int main(void)
{
	int i = 1;

	do
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		i++;
	}
	while(i <= 100)
	{
		printf(" ");
	}
	printf("\n");
	return (0);
}
