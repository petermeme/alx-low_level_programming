#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0
 */
int get_endianness(void)
{
	int b = 1;
	char *c = (char *)&b;

	if (*c == 1)
	{
		return (1);
	}
	return (0);
	}
