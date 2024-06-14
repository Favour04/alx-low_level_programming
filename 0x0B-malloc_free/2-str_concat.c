#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_len - gets the length of the string
 * @str: is the string to work with
 * Return: returns the length of the string
**/
int string_len(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; *(str + i) != '\0'; i++)
	{
		continue;
	}
	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len_s1, len_s2, i, j;
	char *result;

	len_s1 = string_len(s1);
	len_s2 = string_len(s2);

	result = malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (len_s1 + len_s2); i++)
	{
		if (i < len_s1)
		{
			if (s1 == NULL)
				continue;
			*(result + i) = *(s1 + i);

			continue;
		}
		else if (i >= len_s1 && i < (len_s1 + len_s2))
		{
			if (j == len_s2)
			{
				*(result + i) = '\0';
				continue;
			}
			if (s2 == NULL)
				continue;
			*(result + i) = *(s2 + j);
			j = j + 1;
			continue;
		}
	}
	return (result);
}
