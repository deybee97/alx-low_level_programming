#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by
 * a new line.
 * @a: array of size n
 * @n: size of array a
 * Return: void
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", *(a + count));
		if (count != n - 1)
			printf(", ");
		count++;

	}
	printf("\n");
}
