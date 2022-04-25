#include <stdio.h>

/**
 * leet - encode 1337.
 * @s: input string.
 * Return: fornatted string
 */

char *leet(char *s)
{
	int texts[] = {97, 101, 111, 116, 108};
	int numbers[] = {52, 51, 48, 55, 49};
	int i = 0;

	while (*(s + i) != '\0')
	{
		int j = 0;

		if ((*(s + i) >= 97 && *(s + i) <= 122) || (*(s + i) >= 65 && *(s + i) <= 90))
		{
			while (*(texts + j) != '\0')
			{
				if (*(s + i) == *(texts + j) || *(s + i) == *(texts + j) - 32)
				{
					*(s + i) = numbers[j];
					break;
				}
				j++;
			}
		}
		i++;
	}
	return (s);
}

