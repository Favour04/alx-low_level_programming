#include <stdio.h>

/**
 * main - print number combo
 *
 * Return: Always 0
 */

int main(void)
{
	int j;
	int k;
	int i;

	i = 48;
	k = 49;

	while (i < 57)
	{
		j = k;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);

			if (i == 56 && j == 57)
			{
				j++;
			}
			else
			{
				putchar(',');
				putchar(' ');
				
				j++;
			}
		}

		k++;
		i++;
	}
	putchar('\n');

	return (0);
}
