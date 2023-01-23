#include "sort.h"

/**
 * quick_sort - sort an array of ints in ascending order (QuickSort)
 * @array: array of integers
 * @size: number of elements in array
 *
 * Description: implementing Lomuto parittion scheme
 * Return: nothing!
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicker_sort(array, size, 0, size - 1);
}

/**
 * quicker_sort - does the actual recursive QuickSort
 * @array: array of integers
 * @size: number of elements in array
 * @lo: first index of array
 * @hi: last index of array
 *
 * Return: nothing!
 */
void quicker_sort(int *array, size_t size, int lo, int hi)
{
	int idx;

	if (lo < hi)
	{
		idx = partition(array, size, lo, hi);
		quicker_sort(array, size, lo, idx - 1);
		quicker_sort(array, size, idx + 1, hi);
	}
}
/**
 * partition - partition through an array of integers
 * @array: array of integers
 * @size: number of elements of array
 * @lo: first index of array
 * @hi: last index of array
 *
 * Description: all values must be accurate
 * Return: new index position
 */
int partition(int *array, size_t size, int lo, int hi)
{
	int pivot = array[hi], idx = lo, xdi;

	for (xdi = lo; xdi <= hi - 1; xdi++)
	{
		if (array[xdi] < pivot)
		{
			if (idx != xdi)
			{
				swap(&array[idx], &array[xdi]);
				print_array(array, size);
			}
			idx++;
		}
	}
	if (pivot != array[idx])
	{
		swap(&array[idx], &array[hi]);
		print_array(array, size);
	}
	return (idx);
}

/**
 * swap - swaps the address values of two pointers
 * @ptr_a: pointer to integer
 * @ptr_b: pointer to integer
 *
 * Return: nothing!
 */
void swap(int *ptr_a, int *ptr_b)
{
	int tmp;

	if (!ptr_a || !ptr_b)
		return;

	tmp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = tmp;
}
