#include <stdio.h>
#include <stdlib.h>

#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
*/

int main(void)

{	/* n stands inplace of the given random number */
	/* ld stand for last digit of n */
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Get last digit of numbers */
	l = n % 10;
	/* Check what is in the last digit and print result */
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}

	else if (n == 0)
	{
		printf("Last digit  of %d is %d and is equal to 0\n", n, l);
	}

	else
	{
		printf("Last digit of %d is %d and is less than and 6 and not 0\n", n, l);
	}

	return (0);

}
