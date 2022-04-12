#include <stdio.h>
/**
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int a = 3;
	int b = 5;
	int c = 1024 - (1024 % 3);
	int d = c / 3;
	int count = 1;
	int total = 0;


	while (count <= d)
	{
		total += a * count;

		if (b  * count < 1024 && (b * count) % 3 != 0)
		{
			total += b * count;
		}
		
		count++;
	}
	printf("%d\n", total);
	return (0);
}
		
