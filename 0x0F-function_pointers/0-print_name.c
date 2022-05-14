#include <stdio.h>
#include "main.h"

/**
 * print_name - prints name
 * @name: input name.
 * @f: function input
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
