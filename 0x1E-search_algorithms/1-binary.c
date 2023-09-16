#include "search_algos.h"

/**
* binary_search - Search for a value using binary search.
*
* @array: A pointer to the first element of the array to search.
* @size: The number of elements in the array.
* @value: The value to search for.
*
* Return: If the value is not present or the array is NULL, -1.
          Otherwise, the first index where the value is located.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	/* Check for NULL */
	if (array == NULL)
		return (-1);

	/* Binary search */
	for (left = 0, right = size - 1; right >= left;)
	{
		/* Print the value */
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		/* Calculate for middle index */
		i = left + (right - left) / 2;

		/* If middle element is value */
		if (array[i] == value)
			/* Return index */
			return (i);

		/* If the middle element is greater than the value */
		if (array[i] > value)
			/* Update the right boundary */
			right = i - 1;
		else
			/* Otherwise update left boundary */ 
			left = i + 1;
	}
	/* Value not found, return -1 */
	return (-1);
}
 