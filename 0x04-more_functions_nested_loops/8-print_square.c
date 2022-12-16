#include "main.h"
/**
 * print_square - prints a square
 * @size: print size
 * Return: Always 0.
 */
void print_square(int size)
{
int i;
int b;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (b = 0; b < size; b++)
{
_putchar (35);
}
_putchar ('\n');
}
}
else
{
_putchar ('\n');
}
}
