#include "main.h"
/**
 * main - print alphabet
 * print_alphabet - print letter in lowercase alphabet
 *Return: Always 0
 */

void print_alphabet(void)
{
char me;
for (me = 'a'; me <= 'z'; me++)
	_putchar(me);
_putchar('\n');
}
