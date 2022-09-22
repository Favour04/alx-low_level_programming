#include "main.h"
#include <stdio.h>

/**
 * main - check code
 *
 * Return: 0 on success
 * and 1 on fail
*/

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);
}
