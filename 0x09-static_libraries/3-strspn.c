#include "main.h"
/**
 * _strspn - function to find sbstring
 * @s: the main string o check
 * @accept: The sub- string
 * Return: n as number of similar charachers
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				n++;
				break;
			}
			else if (accept[a] + 1 == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
