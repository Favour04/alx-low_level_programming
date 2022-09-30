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
	if (argc > 0)
		printf("%d\n", argc -1);
	
	return (0);
}

