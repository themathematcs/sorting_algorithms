#ifndef SORTING_H
#define SORTING_H


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* QuickSort helper functions */
void quicker_sort(int *array, size_t size, int lo, int hi);
int partition(int *array, size_t size, int lo, int hi);

void swap(int *ptr_a, int *ptr_b);
void swap_ints(int *a, int *b);
#endif
