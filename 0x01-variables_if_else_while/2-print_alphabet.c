#include <stdio.h>
/**
 * Write a program that prints the alphabet in lowercase, followed by a new line
 *
 */

int main(void)
{
	
	char ch = 'a';
	
	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return(0);
}
