#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line
 *		on the terminal
 *@n: number of times the character
 *		_should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int j, i;

		for (j = 1; j < n; j++)
		{
			for (i = 1; i < n; i++)
			{
				if (j == i)
					_putchar('\\');
				else if (i < j)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
