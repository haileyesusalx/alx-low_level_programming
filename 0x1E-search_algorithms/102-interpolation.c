#include "search_algos.h"

/**
* interpolation_search - Search for a value using linear search.
*
* @array: A pointer to the first element of the array to search.
* @size: The number of elements in the array.
* @value: The value to search for.
*
* Return: If the value is not present or the array is NULL, -1.
          Otherwise, the first index where the value is located.
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	/* Check for NULL */
	if (array == NULL)
		return (-1);

	/* Interpolation search*/
	for (l = 0; r = size - l; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			/* Print the value */
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}
	
	return (-1);
}
	
 