#include "main.h"

/**
* print_last_digit - prints the last digit of a number
* @n: the number to be computed
* Return: 0 for last digit
*/
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
			_putchar(ld + '0');

	return (0);
}
