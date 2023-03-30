#include "main.h"
/**
 * leet - encode into 1337speak
 * @arr: input value
 * Return: arr value
 */
char *leet(char *arr)
{
	int a, b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (a = 0; arr[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (arr[a] == s1[b])
			{
				arr[a] = s2[b];
			}
		}
	}
	return (arr);
}
