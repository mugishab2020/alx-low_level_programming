#include"search_algos.h"
/**
 * jump_search - function to jump search algothim
 * @array: the array to search from
 * @size: the size of the array
 * @value: the value to serach from the array
 * Return: -1 for not found || index where we found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump_step, prev_index;

	if (array == NULL || size == 0)
		return (-1);

	jump_step = sqrt(size);
	for (i = prev_index = 0; prev_index < size && array[prev_index] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", prev_index, array[prev_index]);
		i = prev_index;
		prev_index += jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, prev_index);

	prev_index = prev_index < size - 1 ? prev_index : size - 1;
	for (; i < prev_index && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
