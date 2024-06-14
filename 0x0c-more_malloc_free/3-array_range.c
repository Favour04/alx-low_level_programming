#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: the minimum integer to include in the array
 * @max: the maximum integer to include in the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int size;
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
