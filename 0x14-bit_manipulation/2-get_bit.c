#include "main.h"
/**
 * get_bit - function to return the val of bit at certain index
 * @n: number to be found
 * @index: the index if the bit
 *
 * Return: the value of bit found
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int gbit;

	if (index > 63)
		return (-1);

	gbit = (n >> index) & 1;

	return (gbit);
}
