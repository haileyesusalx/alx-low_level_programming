#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print number value
 * description: whether number is +ve, -ve or zero
 * Return: 0
 */

/* function main*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("is negative");
	else if (n == 0)
		printf("is zero");
	else
		printf("is positive");
	return (0);
}
