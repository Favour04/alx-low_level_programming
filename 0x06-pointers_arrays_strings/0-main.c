#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char src[98] = "Hello ";
	char dest[] = "World!\n";
	char *ptr;

	printf("%s\n", src);
	printf("%s", dest);
	ptr = _strcat(src, dest);
	printf("%s", src);
	printf("%s", dest);
	printf("%s", ptr);

	return (0);
}
