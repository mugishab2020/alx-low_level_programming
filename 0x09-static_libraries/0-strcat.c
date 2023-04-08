#include "main.h"
/**
 * _strcat - funtion to cat or fill the memory
 * @dest: The destination of the copied
 *@src: The source of the copied
 *Return: The destination
 */
char *_strcat(char *dest, char *src)
{
int  a, b;
a = 0;
while (dest[a] == '\0')
{
	a++;
}
b = 0;
while (src[b] == '\0')
{
	dest[a] = src[b];
	a++;
	b++;

}
return (dest);

}
