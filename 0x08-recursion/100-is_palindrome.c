#include "main.h"
/**
 * helping - function for recursion
 * @s: the input string
 * @a: the number for front check
 * @length: Number for back check
 * Return: 0/1 depending on it parindromity
 */
int helping(char *s, int a, int length)
{
	if (*(s + a) != *(s + (length - 1)))
	{
		return (0);
	}
	if (a >= length)
	{
		return (1);

	}
	else
		return (helping(s, a + 1, length - 1));
}
/**
 * char_length - function to find the string length
 * @s: the input string
 * Return: the number of character in string
 */
int char_length(char *s)
{

	if (*s == '\0')
		return (0);
	return (1 + char_length(s + 1));
}
/**
 * is_palindrome - function to check for parindrome
 * @s: the string srored in array s
 *
 * Return: 0 for non parindrom 1 for parindrome
 */
int is_palindrome(char *s)
{
if (*s == 0)
	return (0);
return (helping(s, 0, char_length(s)));
}

