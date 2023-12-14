#include "main.h"
/**
 * get_bit - fuction to get bit at a given index
 * @n: number
 * @index: index to get bit from
 *
 * Return: return the bit gotten from index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> (index) & 1);
	return (bit);

}
