#include <unistd.h>

/*
 * _putchar - print characters
 *
 * @c: character inputed
 * Return: 1 on success
 * -1 on error
*/

int _putchar(int c)
{
	return(write(1, &c, 1));
}
