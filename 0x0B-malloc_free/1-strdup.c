#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_len - returns the length of a string
 * @str: the string to measure
 * @n: the counter
 * Return: the length of the string
 */
unsigned int string_len(char *str, int n)
{
	if (*(str + n) == '\0')
		return (n);
	n = n + 1;
	return (string_len(str, n));
}
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to copy
 * Return: a pointer to the duplicated string, NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *pt;
	unsigned int i;
	unsigned int str_len;

	if (!str)
		return (NULL);
	str_len = string_len(str, 0);
	pt = malloc(str_len + 1 * sizeof(char));
	if (pt == NULL)
		return (NULL);
	for (i = 0; i < str_len + 1; i++)
	{
		pt[i] = str[i];
	}

	return (pt);
}
