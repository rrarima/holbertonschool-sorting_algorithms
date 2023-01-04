#include "sort.h"

/**
  * selection_sort - function that sorts an array of integers in ascending
  *                  order using the Selection sort algorithm
  *
  * @array: pointer to array we are comparing to in main
  * @size: size of array used in main
  */

void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t j;
	size_t min;
	int temp;

	if (array == NULL)
		return;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;

		while (j < size)
		{
			if (array[j] < array[min])
				min = j;
			j = j + 1;
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
		i = i + 1;
	}
}
