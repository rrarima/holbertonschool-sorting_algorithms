#include "sort.h"
/**
 * partition - a process in quick sort
 *
 * @array: The array to be printed
 * @start: Index of the first element in the array
 * @end: Index of the last element in the array
 * @size: Number of elements in array
 * Return: partitionIndex
 */

int partition(int *array, int start, int end, size_t size)
{
	int pivot, partitionIndex, temp;
	int i;

	pivot = array[end];
	partitionIndex = start;

	i = start;
	while (i < end)
	{
		if (array[i] <= pivot)
		{
			if (i != partitionIndex)
			{
				temp = array[i];
				array[i] = array[partitionIndex];
				array[partitionIndex] = temp;
				print_array(array, size);
			}
			partitionIndex = partitionIndex + 1;
		}
		i = i + 1;
	}
	temp = array[partitionIndex];
	array[partitionIndex] = array[end];
	array[end] = temp;
	print_array(array, size);
	return (partitionIndex);
}

/**
 * quick_sort_i - sorts any array of integers
 *
 * @array: The array to be printed
 * @start: Index of the first element in the array
 * @end: Index of the last element in the array
 * @size: Number of elements in array
 */

void quick_sort_i(int *array, int start, int end, size_t size)
{
	int partitionIndex;

	if ((end - start) < 1)
	{
		return;
	}

	partitionIndex = partition(array, start, end, size);
	quick_sort_i(array, start, partitionIndex - 1, size);
	quick_sort_i(array, partitionIndex + 1, end, size);
}

/**
 * quick_sort - sorts an array of integers in ascending order
 *
 * @array: The array to be printed
 * @size: Number of elements in array
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_i(array, 0, size - 1, size);
}
