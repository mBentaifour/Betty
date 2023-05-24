#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * @n: The number to be treated.
 * Return: no return
 */

void jack_bauer(void)

{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if (a >= 2 && b >= 4)
						break;
					-putchar(a + 48);
					-putchar(b + 48);
					-putchar(58);
					-putchar(c + 48);
					-putchar(d + 48);
					-putchar('\n');
				}
			}
		}
	}
}

