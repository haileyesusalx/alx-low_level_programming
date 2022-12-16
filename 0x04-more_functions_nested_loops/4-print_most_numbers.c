#include "main.h"

/**
 * print_most_numbers - print most number
 * Return:0
 */

void print_most_numbers(void)
{
int h;

for (h = 48; h < 58; h++)
{
if ((h == 50) || (h == 52))
{
continue;
}
_putchar(h);
}
	_putchar(10);
}
