#include "main.h"
#include <stdio.h>

/**
 *  *_memcpy - copy n bytes of memory from *src to dest
 * @*src: string to be printed
 * @*dest: pointer to src
 * @n: num of bytes
 * Return: pointer to dest 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{	
	while (n > 0)
	{	
		dest[n - 1] = src[n - 1];
		n--;
	}

	return (dest);
}
