#include "main.h"
#include <stdlib.h>
/**
 * create_array - fuction to make array
 * @size: size of string
 * @c: string
 * Return: Sting
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;
	
	s = malloc((size + 1) * sizeof(char)); /* char times the string + 1 */
		if (s == NULL)
		{
			return (NULL);
		}
	i = 0;
		while (i < size)
		{
			s[i] = c;
			i++;

		}
		s[i] = '\0';
		return (s);
}
