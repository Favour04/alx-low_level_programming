#include <unistd.h>

/**
 * _puts - write the character c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * On error, -1 is returned, and errno is set appropriately.
*/
int _puts(int c)
{
	return (write(1, &c, 1));


}
