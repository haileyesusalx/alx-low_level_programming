#include <stdio.h>
/**
 * main - print alphabet
 * description: print alphabet in order
 * Return: Always success
 */
int main(void)
{
char c;
char C;
for (c = 'a'; c <= 'z'; c++)
	putchar(c);
putchar('\n');
for (C = 'A'; C <= 'Z'; C++)
	putchar(C);
putchar('\n');
return (0);
}
