#include "main.h"
/**
 *_puts - function for outting a character on a line
 *@s: the characher to be added
 *Reurn: Nothing
 */
void _puts(char *s)
{
while (*s != '\0')
{
	_putchar(*s++);
}
_putchar('\n');
}
