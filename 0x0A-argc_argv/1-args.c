#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: aurgument count
 * @argv: argument veactor
 * Return: Always 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%d\n", argc);
		}
	}

	return (0);
}

