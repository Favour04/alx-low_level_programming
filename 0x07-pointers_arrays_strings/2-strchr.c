#include "main.h"
#include <stddef.h>

/**
 * _strchr - function to return pointer to the fist occurance of a char
 * @s: strig to search
 * @c: value of letter to be seen in s
 *
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{	
	int i;
	
	if (s == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; s[i] != '\0'; i++)
	{	
		
		if (s[i] == c)
		{
			return(&s[i]);
		}
	}
	return (NULL);
}
