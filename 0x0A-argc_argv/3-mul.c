#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: aurgument count
 * @argv: argument veactor
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int mul;

	if (argc > 1)
	{
			mul = atoi(argv[1]) * atoi(argv[2]);
			printf("%d\n", mul);
	}

	return (0);
}

