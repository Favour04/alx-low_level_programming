#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle in the -
 * string haystack. The terminating null bytes (\0) are not compared
 * @haystack: string to check
 * @needle: strimg to compare
 * Return: pointer to the first occurance of te sting in needle
 * NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	int c = 0;
	int b;

	if (haystack == NULL)
	{
		return (NULL);
	}

	a = needle;

	while (*needle != '\0')
	{
		needle++;
		c++;
	}

	while (*haystack != '\0')
	{
		char *s;

		needle = a;
		b = 1;
		while (*haystack == *needle)
		{
			if (*haystack == *a)
			{
				s = haystack;
			}
			haystack++;
			needle++;
			b++;
			if (b == c)
			{
				return (s);
			}
		}
		haystack++;
	}
	return (NULL);
}
