#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		if (size == sizeof(char))
			*(((char *) ptr) + i) = 0;
		else if (size == sizeof(int))
			*(((int *) ptr) + i) = 0;
		else if (size == sizeof(float))
			*(((float *) ptr) + i) = 0;
		else if (size == sizeof(double))
			*(((double *) ptr) + i) = 0;
		else
		{
			printf("Error\n");
			return (NULL);
		}
	}
	return (ptr);
}
