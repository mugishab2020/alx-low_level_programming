#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index -function for to return the index match with given
 * @array: the array contains the element to compare
 * @size: the size or the number of the element
 * @cmp: the array2 for comparing
 *
 * Return: -1 fr not matchng and index that matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);

	}
	return (-1);
}
