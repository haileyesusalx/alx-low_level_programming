#include "main.h"
/**
 * print_alphabet_x10 - print alpha 10 times
 */

void print_alphabet(void)
{
int ten;
char me;
for (ten = 0; ten <= 9; ten++)
{
	for (me = 'a'; me <= 'z'; me++)
	_putchar(me);
_putchar('\n');
}
}
