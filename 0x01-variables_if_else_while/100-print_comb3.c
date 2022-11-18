#include <stdio.h>

/**
 * main - print number combo
 *
 * Return - Always 0.
 */

int main(void)
{
	int j;
	int k;
	
	k = 48;
	
	while (k != 58)
	{
		j = 48;
		
		while (j != 58)
		{
			putchar(k);
			putchar(j);
			putchar(',');
			putchar(' ');

			j++;
		}
		
		k++;
	}
	putchar('\n');

	return (0);
}
