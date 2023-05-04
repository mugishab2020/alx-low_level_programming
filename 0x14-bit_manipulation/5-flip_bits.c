#include "main.h"
/**
 * flip_bits - function to counts the changed bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int curr;
	unsigned long int ex = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		curr = ex >> a;
		if (curr & 1)
			count++;
	}
	return (count);
}
