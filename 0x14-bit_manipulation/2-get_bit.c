#include "main.h"
/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	(i <<= index);
	{
		if (i & n)
		{
			return (1);
		}
	else
	{
		return (0);
	}
	}
}
