#include "main.h"
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= (sizeof(unsigned long int) * 6))
		return (-1);

	i = 1 << index;
	*n = (*n | i);

	return (1);
}
