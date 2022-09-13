#include <stdio.h>

/**
* main - prints alphabets
*in lower case
* Return: int 0
*/
int main(void)
{
	int hex;

	for (hex = 48; hex < 103; hex++)

	{
		if ((hex > 57) & (hex < 97))

		continue;
		putchar(hex);
	}

	putchar('\n');

	return (0);


}
