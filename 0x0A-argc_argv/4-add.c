#include <stdio.h>
#include <stdlib.h>

/**
 * main - print function name.
 * @argc: number of arg in cl
 * @argv: array of arg in cl
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count = 1;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}
	else
	{
		for (; count < argc; count++)
		{
			if (atoi(argv[count]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[count]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
