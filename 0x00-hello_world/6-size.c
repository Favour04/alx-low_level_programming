#include <stdio.h>

/**
 * main - entry point
 *
 * print size of diferent data type
 * Return: 0 (Success)
*/
int main(void)
{
	printf("Size of a char %2d\n", sizeof(char));
	printf("Size of an int %2d\n", sizeof(int));
	printf("Size of a long int %2d\n", sizeof(long int));
	printf("Size of a long long int  %2d\n", sizeof(long long int));
	printf("Size of a float %2d\n", sizeof(float));

	return (0);

}
