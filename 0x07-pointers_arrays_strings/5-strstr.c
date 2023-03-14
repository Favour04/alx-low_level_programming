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
	if (haystack == NULL)
	{
		return (NULL);
	}

	while (*haystack != '\0')
	{
		char *s;

		while (*haystack == *needle)
		{
			s = haystack;
			haystack++;
			needle++;
			return (s);
		}
		haystack++;
	}

	return (NULL);
}
