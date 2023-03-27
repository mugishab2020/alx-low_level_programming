#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int howlong = 0, reverse;

	while (*s != '\0')
	{
		howlong++;
		s++;
	}

	for (reverse = howlong; reverse > 0; reverse--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
