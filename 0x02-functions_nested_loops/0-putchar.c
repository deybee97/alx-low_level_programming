#include <stdio.h>
/**
 * main-prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char _putchar[8] = "_putchar";

	int count = 0;

	while (count < 8)
	{
		putchar(_putchar[count]);
		count++;
	}
	putchar('\n');
	return (0);
}
