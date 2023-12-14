#include "main.h"
/**
 * set_bit: set bit to one at a given index
 * @index: the index, starting from 0 of the bit you want to set
 * @n: poiter to the number
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	*n = *n | (1 << (index));

	return 1;
		
}
