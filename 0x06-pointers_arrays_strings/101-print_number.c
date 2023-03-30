#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	int a;

	a = n;

	if (n < 0)
	{
		a = -n;
		_putchar('-');
	}
	else
	{
	if (a / 10 != 0)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
}

