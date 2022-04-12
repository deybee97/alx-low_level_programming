#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Shows 1 if the input is a
 * letter Another cases, shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int c)
{
	int output = 0;

	if (isalpha(c))
	{
		output = 1;
	}

	return (output);
}
