#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int howlong = 0;
char *t = str;
	int o;

	while (*t != '\0')
	{
		t++;
		howlong++;
	}
	howlong = howlong - 1;
	for (o = 0 ; o <= howlong ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');
}
