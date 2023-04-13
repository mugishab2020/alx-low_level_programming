#include "main.h"
#include <stdlib.h>
/**
 * array_range - funtion to creatte the array in given range
 * @min: the minimum range
 * @max: the maximmum range
 * Return: the poinetr to te created array
 */
int *array_range(int min, int max)
{
	int i, *arr;


	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
