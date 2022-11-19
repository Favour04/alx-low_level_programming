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
	int p;

	i = 48;
	k = 49;

	while (i < 57)
	{
		j = k;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');

			j++;
		}

		k++;
		i++;
	}
	putchar('\n');

	return (0);
}
