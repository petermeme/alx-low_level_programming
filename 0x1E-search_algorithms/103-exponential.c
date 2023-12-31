#include "search_algos.h"

/**
 * exponential_search - performs exponential search
 * @arr: the integer array
 * @s: its size
 * @v: value to search for
 *
 * Return: the index found or -1
 */
int exponential_search(int *arr, size_t s, int v)
{
	size_t i = 1, newsize = 0;
	int ret;

	if (!arr || !s)
		return (-1);

	while (i < s && arr[i] < v)
	{
		printf("Value checked array[%lu] = [%d]\n", i, arr[i]);
		i <<= 1;
	}
	newsize = (i >= s ? s : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= s ? s - 1 : i << 1);
	ret = binary_search(arr + i, newsize, v);
	return (ret == -1 ? ret : ret + (int)i);
}

/**
 * binary_search - performs binary search
 * @arr: the integer array
 * @s: its size
 * @v: value to search for
 *
 * Return: the index found or -1
 */
int binary_search(int *arr, size_t s, int v)
{
	size_t i = 0;
	int *a = arr;

	if (!arr)
		return (-1);

	while (s)
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

