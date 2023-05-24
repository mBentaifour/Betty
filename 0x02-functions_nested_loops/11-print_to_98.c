#include "main.h"

/**
 * print_to_98 - a function that prints all natural numbers from n to 98,
 * followed by a new line
 * @n: int to strat
 * Return: no return
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d", n);
		n++;
		if (n < 98)
			printf(", ");
	}
	while (n > 98)
	{
		printf("%d", n);
		n--;
		if (n > 98)
			printf(", ");
	}
}
