#include "main.h"
/**
* _islower - print letter in lowercase alphabet
* @c: the character
* Return: 1 is the letter is lowercase, 0 if not
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
