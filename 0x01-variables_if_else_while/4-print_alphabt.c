#include <stdio.h>

/**
* main - prints alphabets
*in lower case
* Return: int 0
*/
int main(void)
{
	int alp;

	for (alp = 97; alp < 123; alp++)

	{
		if (alp == 101 || alp == 113)

		continue;
		putchar(alp);
	}

	putchar('\n');

	return (0);


}
