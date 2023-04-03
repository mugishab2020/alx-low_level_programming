#include "main.h"
/**
 * _strpbrk - function locates the first occurrence in the string
 *@s: first string to  e\be checked
 *@accept: second tring to be checked
 *
 *Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
int a;
while (*s)
{
for (a = 0; accept[a]; a++)
{
if (*s == accept[a])
	return (s);
}
s++;
}
return ('\0');
}
