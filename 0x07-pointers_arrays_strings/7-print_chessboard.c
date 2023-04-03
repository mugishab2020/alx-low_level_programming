#include "main.h"
/**
 *print_chessboard - function entry
 * @a: array to store chessboard
 * Return: 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int i, o;

	for (i = 0; i < 8; i++)
	{
		for (o = 0; o < 8; o++)
		{
			_putchar(a[i][o]);
			_putchar('\n');
		}
	}
}
