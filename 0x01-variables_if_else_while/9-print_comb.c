#include <stdio.h>
/**
 * main - print alphabet
 * description: print alphabet in order
 * Return: Always success
 */
int main(void)
{
int num;
for (num = 0; num <= 9; num++)
{
putchar (num + '0');
if (num < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
