#include <stdio.h>
#include <ctype.h>
/**
 * _islower - the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	int output = 1;

	if (c == toupper(c) )
	{
		output = 0;
	}

	return output;

}
