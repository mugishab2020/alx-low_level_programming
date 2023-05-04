#include "main.h"
/**
 * print_binary - the function to print the binary number from int
 * @n: the integer number to convert to
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned  int bin;

	for (a = 63; a >= 0; a++)
	{
		bin = n >> 1;

		if (bin & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');

	}
	if (!count)
		_putchar('0');
}
