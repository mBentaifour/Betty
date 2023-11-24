#include <stdio.h>
#include "main.h"

/**
* flip_bits - returns the number need to flip to get from one number to another
* @n: the first number
* @m: the second number
* not allowed to use the % or / operators
*
* Return: number of bits to be flipped
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int dac = 0;
	unsigned long int roler = n ^ m;

	while (roler > 0)
	{
		if (roler & 1)
		{
			dac++;
		}
		roler >>= 1;
	}
	return (dac);
}
