#include "main.h"

/**
 * set_bit - set bit to 1 at a given index
 * @index: the index, starting from 0 of the bit you want to set
 * @n: poiter to the number
 *
 * Return: 1 if succesful otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit = 1 << index;
	*n = *n | bit;

	return (1);
}
