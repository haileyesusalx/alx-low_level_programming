#include "main.h"
/**
 * print_numbers - print numbers from 0 up t0 9
 * Return: Always 0
 */
void print_numbers(void)
{
	char h = 0;

	while (h <= 9)
	{
		_putchar('0' + h);
		h++;
	}
	_putchar('\n');
}
