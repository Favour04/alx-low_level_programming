#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: the number of arguments
 * @av: the arguments
 * Return: a pointer to the new string, NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	int malloc_len;
	char *newStr;
	int k;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
	}
	malloc_len = len + ac + 1;

	newStr = malloc(malloc_len * sizeof(char));
	if (newStr == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			newStr[k] = av[i][j];
			k++;
		}
		newStr[k] = '\n';
		k++;
	}
	newStr[k] = '\0';
	return (newStr);
}
