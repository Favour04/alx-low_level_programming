#include "main.h"
/**
 * get_endianness - get the endianess
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *p = (char *)&n;

	return (*p == 1);
}
