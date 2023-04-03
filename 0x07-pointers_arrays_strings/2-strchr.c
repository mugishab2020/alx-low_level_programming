#include "main.h"
/**
 *_strchr - Entry point
 * @s: The arrray/point to print
 * @c: The characher to start from
 * Return: The array stord in s
 */
char *_strchr(char *s, char c)
{
	int a;

	a = 0;
while (s[a] >= '\0')
{
	if (s[a] == c)
	{
		return (&s[a]);
	}
	a++;
}
/*
 *for (a = 0; s[a] >= '\0'; a++)
 *if (s[a] == c)		{
*return (&s[a]);
*		}
*/
	return (0);
}
