#include "main.h"
/**
 * _strlen_recursion - function to return the length of the string
 *@s: The array to store the string
 * Return: Number of characher the string contains
 */
int _strlen_recursion(char *s)
{
int length = 0;

if (*s)
{
	length++;
	length += _strlen_recursion(s + 1);
}
return (length);
}
