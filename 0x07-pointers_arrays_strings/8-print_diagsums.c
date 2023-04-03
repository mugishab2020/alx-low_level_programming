#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  function entry point
 * @a: the input array
 * @size: the size of input array
 * Return: alwys ) (as success)
 */
void print_diagsums(int *a, int size)
{
	int rsum, lsum;
	int b;

	rsum = 0;
	lsum = 0;
	for (b = 0; b < size; b++)
	{
		rsum = rsum + a[b * size + b];


	}
	for (b = size - 1; b >= 0; b--)
	{
	lsum += a[(b * size) + (size - b - 1)];
	}
	printf("%d, %d\n", rsum, lsum);
}
