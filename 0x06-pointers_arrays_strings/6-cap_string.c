#include <stdio.h>
#include <stdbool.h>

/**
 * cap_string - function that changes all lowercase letters of a string
 * to uppercase.
 * @s: input string
 * Return: uppercase string character.
 */

char *cap_string(char *s)
{
	int i;
	bool space = false;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32 || s[i] == 9 || s[i] == 46 || s[i] == '\n' || i == 0)
			space = true;
		else if (s[i] >= 'a' && s[i] <= 'z' && space)
		{
			s[i] -= 32;
			space = false;
		}
		else
			space = false;
	}
	return (s);
}


