#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print 0 to 9 and ass space
 *
 * Return 0
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		_putchar(i + 0);

	}
	_putchar('\n');
}
