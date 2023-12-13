#include "search_algos.h"

/**
 * interpolation_search - performs jump search
 * @arr: integer array
 * @s: size
 * @v: value
 *
 * Return: the index found or -1
 */
int interpolation_search(int *arr, size_t s, int v)
{
	size_t pos = 0, low = 0, high = s - 1;

	if (!arr || !s)
		return (-1);

	while (1)
	{
		pos = low + (((double)(high - low) /
			  (arr[high] - arr[low])) * (v - arr[low]));
		if (pos >= s)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, arr[pos]);
		if (arr[pos] == v)
			return (pos);
		else if (arr[pos] > v)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}

