#include "sort.h"
/**
 *selection_sort - sorts an array using selection algorithm
 *@array: array to be sorted
 *@size: length of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, small;
	int swap;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		small = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[small])
				small = j;

		}
		if (i != small)
		{
			swap = array[i];
			array[i] = array[small];
			array[small] = swap;
			print_array(array, size);
		}
	}
}
