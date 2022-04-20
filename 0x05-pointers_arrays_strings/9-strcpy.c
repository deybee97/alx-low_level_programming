#include <stdio.h>
#include <string.h>

/**
 * _strcpy -function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: buffer
 * @src: source
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
