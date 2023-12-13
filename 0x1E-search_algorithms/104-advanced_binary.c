#include "search_algos.h"

/**
 * _advanced_binary - performs advanced binary search
 * @arr: the integer array
 * @s: its size
 * @v: value to search for
 *
 * Return: the index found or -1
 */
int *_advanced_binary(int *arr, size_t s, int v)
{
	size_t i = 0;

	if (!s || !arr)
		return (NULL);
	for (printf("Searching in array: "); i < s; i++)
		printf("%d%s", arr[i], i + 1 == s ? "\n" : ", ");

	i = (s - 1) / 2;
	if (arr[i] == v)
	{
		if (i)
			return (_advanced_binary(arr, i + 1, v));
		return (arr + i);
	}
	else if (arr[i] > v)
		return (_advanced_binary(arr, i + 1, v));
	else
		return (_advanced_binary(arr + i + 1, s - i - 1, v));
}

/**
 * advanced_binary - performs advanced binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int advanced_binary(int *arr, size_t s, int v)
{
	int *a = _advanced_binary(arr, s, v);

	if (!a)
		return (-1);
	else
		return (a - arr);
}