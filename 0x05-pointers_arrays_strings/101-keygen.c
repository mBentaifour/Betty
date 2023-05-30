#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: 0
 */

int main(void)
{
	int line;
	char x;

	srand(time(NULL));
	while (line <= 2645)
	{
		x = rand() % 128;
		line += x;
		putchar(x);
	}
	putchar(2772 - line);
	return (0);
}
