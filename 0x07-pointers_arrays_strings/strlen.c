#include "main.h"

int _strlen(char *c)
{
	int i = 0;

	if (c == NULL)
	{
		return (0);
	}

	while (*c != '\0')
	{
		c++;
		i++;
	}

	return (i);
}
