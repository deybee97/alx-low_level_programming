#include <stdio.h>
/**
 * main- the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char _putchar = 'a';

	

	while (_putchar <= 'z')
	{
		putchar(_putchar);
		_putchar++;
	}
	putchar('\n');

}
