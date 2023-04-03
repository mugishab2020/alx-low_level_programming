#include "main.h"
/**
*_memset()- function fills the first n bytes of the memory area
*@s: the array to be filled
*@b: the constant character to fill
* @n: the number of characher b to fill
* Return: the array s
*/
char *_memset(char *s, char b, unsigned int n)
{
int a;
for (a = 0; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
