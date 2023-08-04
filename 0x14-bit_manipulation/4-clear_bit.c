#include "main.h"
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1 << index;

	if (index > 8)
	{
		*n = (*n & ~i);
		return (1);
	}

	return (-1);
}
