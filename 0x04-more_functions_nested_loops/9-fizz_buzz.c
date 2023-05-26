#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - prints the numbers from 1 to 100
 *		 followed by a new line
 * numbers that are multiples of 3 print Fizz
 * numbers that are multiples of 5 print Buzz
 * numbers that are multiples of 3 and 5 print FizzBuzz
 * Each number or word should be separated by a space
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	_putchar('\n');

	return (0);
}
