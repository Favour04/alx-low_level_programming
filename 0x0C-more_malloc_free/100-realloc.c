#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * memcopy - copies memory area from src to dest
 * @src: source memory area
 * @dest: destination memory area
 * @size: size of memory area
 * Return: nothing
 */
void memcopy(void *src, void *dest, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		*((char *)dest + i) = *((char *)src + i);
	}
	free(src);
}
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory area to free
 * @old_size: the previous size of the memory area
 * @new_size: the new size of the memory area
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size < old_size)
		size = new_size;
	else
		size = old_size;

	p = malloc(new_size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	memcopy(p, ptr, size);
	ptr = p;
	return (ptr);
}
