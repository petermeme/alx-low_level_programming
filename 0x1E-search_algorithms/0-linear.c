#include "search_algos.h"

/**
 * linear_search - performs linear search
 * @arr: the integer array
 * @s: its size
 * @v: value to search for
 *
 * Return: the index found or -1
 */
int linear_search(int *arr, size_t s, int v)
{
	size_t i = 0;

	if (!arr)
		return (-1);
	while (i < s)
	{
		printf("Value checked array[%lu] = [%d]\n", i, arr[i]);
		if (arr[i] == v)
			return (i);
		i++;
	}
	return (-1);
}
