#include "main.h"
/**
 * _strspn - The function to get the length of a prefix substring
 * @s: initial segment
 * @accept: main array that consist only bytes
 *
 * Return: The number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int a;
while (*s)
{
for (a = 0; accept[a]; a++)
{
	if (*s == accept[a])
	{
		count++;
		break;
	}
	else if (accept[a + 1] == '\0')
		break;
}
s++;
}
return (count);
}
