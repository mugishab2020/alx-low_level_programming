#include "main.h"
/**
 * _strchr - entry point
 * @s: the input string
 * @c: the characher to be found
 * Return: 0 as success
 */
char *_strchr(char *s, char c)
{
int a;

for (a = 0; s[a] >= '\0'; a++)
{
	if (s[a] == c)
		return (&s[a]);
}
return (0);
}
