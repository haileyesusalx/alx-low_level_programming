#include "search_algos.h"
/**
 * linear_search - Search for a value using linear search.
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	/* Check for NULL */
	if (array == NULL)
		return (-1);
	/* Iteration */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		/* If the value is found */
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
