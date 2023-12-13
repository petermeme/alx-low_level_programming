#include "search_algos.h"

/**
 * binary_search - performs binary search
 * @arr: integer array
 * @s: size
 * @v: value
 *
 * Return: the index found or -1
 */
int binary_search(int *arr, size_t s, int v)
{
	size_t i = 0;
	int *a = arr;

	if (!arr)
		return (-1);

	while (size)
	{
		for (i = 0, printf("Searching in array: "); i < s; i++)
			printf("%d%s", a[i], i + 1 == s ? "\n" : ", ");

		i = (s - 1) / 2;
		if (a[i] == v)
			return ((a - arr) + i);
		else if (a[i] > v)
			s = i;
		else
		{
			a += (i + 1);
			s -= (i + 1);
		}
	}
	return (-1);
}
