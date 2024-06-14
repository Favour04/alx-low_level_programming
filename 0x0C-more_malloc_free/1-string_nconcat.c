#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * len - get string lenth
 * @s: string to get length of
 *
 * Return: string length
 */
unsigned int len(char *s)
{
	int i;
	unsigned int l = 0;

	if (s == NULL)
		return (l);
	for (i = 0; s[i]; i++)
		l++;
	return (l);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to new string, NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2;
	unsigned int size;
	char *p;
	unsigned int i, j = 0;

	l1 = len(s1);
	l2 = len(s2);
	if (n >= l2)
	{
		n = l2;
		size = (l1 + l2 + 1);
	}
	else
		size = (l1 + n + 1);
	p = malloc(size * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < (size - 1); i++)
	{
		if (i < l1)
			p[i] = s1[i];
		else if (i >= l1)
		{
			if (j < n)
			{
				p[i] = s2[j];
				j++;
			}
		}
	}
	p[i] = '\0';
	return (p);
}
