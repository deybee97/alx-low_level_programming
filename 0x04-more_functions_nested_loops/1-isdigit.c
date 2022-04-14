#include <ctype.h>
#include <stdio.h>

/**
 * _isdigit - checks if input is digit ot not
 * @c - input can be anything
 * Return - 0 if is not digit and 1 if is digit
 *
 */

int _isdigit(int c)
{
	int output = 0;

	if (isdigit(c))
	{
		output = 1;
	}
	return (output);
}
