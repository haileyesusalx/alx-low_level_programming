#include <stdlib.h>
#include <time.h>

/**
 * void main function:x
 *  - this is the main function
 * description - whether number is +ve, -ve or zero
 * return - it return 0
 */
/* more headers goes there */



/* betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
