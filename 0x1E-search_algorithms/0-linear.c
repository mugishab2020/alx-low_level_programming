#include "search_algos.h"
/**
 * linear_search - fn that make the binary search
 * @array: the array to search into
 * @size: ths size of the array
 * @value: the value top search into the array
 * Return: index of value or Null or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a = 0;

	if (array == NULL)
		return (-1);
	for (; a < size; a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);

	}
	return (-1);
}
