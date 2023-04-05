#include "main.h"
/**
 * _print_rev_recursion - function to print reversed string using recursion
 * @s: The array to store the string
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
