#include "main.h"
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0, bit;
		bit = n ^ m;
	while (bit > 0)
	{
		flip += (bit & 1);
		bit >>= 1;
	}

	return (flip);
}
