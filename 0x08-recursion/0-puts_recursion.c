#include "main.h"
/**
 * _puts_recursion - function to print a string by recursing
 * @s: The array to record the string
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
