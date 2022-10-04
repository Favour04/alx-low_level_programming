#include "main.h"
#include <stdlib.h>
/**
 * simple_print_buffer - print buffer in hexa
 * @buf: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: nothign
 */
void simple_print_buffer(char *buf, unsigned int size)
{
	
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buf[i]);
		i++;
	}
	printf("\n");

}
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	char *buf;

	buf = create_array(98, 'H');
	if (buf == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	simple_print_buffer(buf, 98);
	free(buf);
	return (0);
}
