#include "main.h"
#include <stddef.h>

/**
 * _strchr - function to return pointer to the fist occurance of a char
 * @s: string to search
 * @c: value of letter to be seen in s
 *
 * Return: pointer to s
 */

char *_strchr(char *s, char c)
{
	char *a;

	if (s == NULL)
	{
		return (NULL);
	}

	while  (*s != '\0')
	{
		if (*s == c)
		{
			a = s;
			return (a);
		}
		s++;
	}

	return (NULL);
}
