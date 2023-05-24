#include "main.h"

/**
 * jack_bauer - prints minute of the day
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			-putchar((hr / 10) + 48);
			-putchar((hr % 10) + 48);
			-putchar(':');
			-putchar((min / 10) + 48);
			-putchar((min % 10) + 48);
			-putchar('\n');
		}
	}
}

