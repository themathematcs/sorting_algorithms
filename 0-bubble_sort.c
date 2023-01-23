#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t idx, xdi;

	if (!array)
		return;

	for (xdi = 0; xdi < size - 1; xdi++)
	{
		for (idx = 0; idx < size - xdi - 1; idx++)
		{
			if (array[idx] > array[idx + 1])
			{
				swap_ints(&array[idx], &array[idx + 1]);
				print_array(array, size);
			}
		}
	}
}
