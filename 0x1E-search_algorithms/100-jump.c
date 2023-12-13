#include "search_algos.h"

/**
 * jump_search - performs jump search
 * @arr: the integer array
 * @s: its size
 * @v: value to search for
 *
 * Return: the index found or -1
 */
int jump_search(int *arr, size_t s, int v)
{
	size_t i = 0, j = sqrt(s);

	if (!arr)
		return (-1);

	while (i < s && arr[i] < v)
	{
		printf("Value checked array[%lu] = [%d]\n", i, arr[i]);
		i += j;
	}

	j = i - j;
	printf("Value found between indexes [%lu] and [%lu]\n", j, i);
	i = i >= s ? s - 1 : i;
	while (j <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", j, arr[j]);
		if (arr[j] == v)
			return (j);
		j++;
	}
	return (-1);
}