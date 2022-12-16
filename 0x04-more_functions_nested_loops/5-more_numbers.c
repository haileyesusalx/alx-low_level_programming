#include "main.h"
/**
 * more_numbers - prints numbers to 14
 * Return:0
 */
void more_numbers(void)
{
int h1, h2;
for (h1 = 0; h1 < 10; h1++)
{
for (h2 = 0; h2 <= 14; h2++)
{
if (h2 > 9)
{
_putchar((h2 / 10) + '0');
}
_putchar((h2 % 10) + '0');
}
_putchar(10);
}
}
