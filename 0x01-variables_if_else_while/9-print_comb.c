#include <stdio.h>

/**
* main - prints alphabets
*in lower case
* Return: int 0
*/
int main(void)
{
	int alp;

	for (alp = 48; alp < 58; alp++)

	{
		putchar(alp);
		if (alp < 57)

		{
		putchar(44);
		putchar(32);

														}
		}

	putchar('\n');

	return (0);


}
