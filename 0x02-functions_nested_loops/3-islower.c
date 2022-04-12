#include <stdio.h>
#include <ctype.h>
/**
 * _islower - the alphabet, in lowercase, followed by a new line.
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	int output = 1;

	if (c == toupper(c))
	{
		output = 0;
	}

	return (output);
}
