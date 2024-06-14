#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * Count - gets the number of words in a string
 * @str: the string to check
 * Return: the number of words in the string
 */
int Count(char *str)
{
	int i, Count = 0;

	if (str == NULL)
		return (Count);
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			continue;
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			Count++;
	}
	return (Count);
}
/**
 * free_malloc - frees malloc if there is an error
 * @temp: the memory to free
 * @a: the array index
 * Return: nothing
 */
void free_malloc(char **temp, int a)
{
	int i;

	for (i = 0; i <= a; i++)
	{
		free(temp[i]);
	}
	free(temp);
}
/**
 * strtow - converts a string to an array of words
 * @str: the string to convert to words
 * Return: NULL if string is (NULL or "") else a pointer to an array of words
 */
char **strtow(char *str)
{
	int i, j, a = 0, b = 0, charCount = 0, Counts;
	char **temp;

	Counts = Count(str);
	if (str == NULL || Counts == 0)
		return (NULL);

	temp = malloc((Counts + 1) * sizeof(char *));

	if (temp == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				charCount++;
			temp[a] = malloc((charCount + 1) * sizeof(char));
			charCount = 0;
			if (temp[a] == NULL)
			{
				free_malloc(temp, a);
				return (NULL);
			}
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
			{
				temp[a][b] = str[j];
				b++;
			}
			temp[a][b] = '\0';
			b = 0;
			a++;
			i = j - 1;
		}
		if (str[i + 1] == '\0')
			temp[a] = NULL;
	}
	return (temp);
}
