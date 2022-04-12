#include <stdio.h>

int main(void)
{
	int a = 3;
	int b = 5;
	int c = 1024 -(1024 % 3);
	int d = c/ 3;
	int count = 1;
	int total = 0;


	while (count <= d)
	{
		total += 3 * count;

		if(5  * count < 1024 && (5 * count ) % 3 !=0)
		{
			total += 5 * count;
		}
		
		count++;
	}
	printf("%d\n", total);
}
		
