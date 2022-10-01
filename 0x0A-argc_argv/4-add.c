#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /* lib for bool data type */

/**
 * is_num - check the num
 * @argvv: aurgument count
 * Return: true if entire string is a number
**/
bool is_num(char *argvv)
{
	int n;

	for (n = 0; argvv[n]; n++)
	{
		if (!(argvv[n] >= '0' && argvv[n] <= '9'))
			return (0);
	}
	return (1);
}
/**
 * main - check the code
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}


	while (i < argc)
	{
		if (is_num(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
