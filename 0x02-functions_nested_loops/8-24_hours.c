#include "main.h"

/**
 * jack_bauer - code to display all seconds of a sound trrack.
 *
 * Description: print every minute of a day
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
int hours = 0;
int min = 0;

while (hours < 24)
{
while (min < 60)
{
_putchar('0' + (hours / 10));
_putchar('0' + (hours % 10));
_putchar(':');
_putchar('0' + (min / 10));
_putchar('0' + (min % 10));
_putchar('\n');
}
min = 0;
hours++;
}
}
