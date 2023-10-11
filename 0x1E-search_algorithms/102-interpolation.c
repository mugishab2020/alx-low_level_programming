#include"search_algos.h"
/**
 * interpolation_search - the function to implement tnterpolating search
 * @array: the array to search from
 * @size: the size of the array to search from
 * @value: the key to be searched
 * Return: the first index for the key to be found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t h = size - 1, l = 0, p;

	if (array == NULL)
		return (-1);
	while (l <= h)
	{
		p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (p < size)
			printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", p);
			break;
		}

		if (array[p] == value)
			return (p);
		if (array[p] < value)
			l = p + 1;
		else
			h = p - 1;
	}
	return (-1);
}
