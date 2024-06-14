#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Check for negative sign */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	/* Iterate through each character of the string */
	for (; s[i] != '\0'; i++)
	{
		/* Check if character is a digit */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* Update the result by multiplying by 10 and adding the digit */
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			/* Break the loop if a non-digit character is encountered */
			break;
		}
	}

	/* Apply the sign to the result */
	result *= sign;

	return (result);
}
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
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		return (98);
	}
	result = mul(num1, num2);

	printf("%d\n", result);

	return (0);
}
