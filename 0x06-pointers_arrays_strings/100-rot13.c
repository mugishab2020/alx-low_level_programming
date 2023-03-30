#include "main.h"
/**
 * rot13 - encoder rot13
 * @arr: pointer to string params
 *
 * Return: *arr
 */
char *rot13(char *arr)
{
int a, b;
char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (a = 0; arr[a] != '\0'; a++)
{
	for (b = 0; b < 52; b++)
	{
		if (arr[a] == data[b])
		{
			arr[a] = datarot13[b];
	}
}
}
return (arr);
}
