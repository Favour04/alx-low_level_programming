#include <stdio.h>
#include <stdlib.h>
/**
 * mul - multiplies two numbers
 * @num1: first number
 * @num2: second number
 * Return: product of two numbers
 */
int mul(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if successful, 98 if incorrect number of arguments
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		return (98);
	}
	int result = mul(num1, num2);

	printf("%d\n", result);

	return (0);
}
