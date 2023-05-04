#include "main.h"
/**
 * clear_bit - function to set 0 to a given index
 * @n: pointer to inte to change
 * @index: the index of bit to change to 0
 *
 * Return: 1 for success / 0 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
