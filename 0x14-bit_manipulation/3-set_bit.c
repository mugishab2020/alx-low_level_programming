#include "main.h"
/**
 * set_bit - function to set a bit at a given index
 * @n: pointer to the integer  to be changed
 * @index: index of a bit to change
 *
 * Return: 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
