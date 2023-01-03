#include "sort.h"

/**
  * bubble_sort - function that sorts an array of integers in ascending order
  *		  using the Bubble sort algorithm
  * @array: pointer to array we are comparing to in main
  * @size: size of array used in main
  */

void bubble_sort(int *array, size_t size)
{
	size_t x = 0;
	size_t y;
	int temp;

	if (array == NULL)
	{
		return;
	}
	while (x < size - 1)
	{
		y = 0;
		while (y < size - x - 1)
		{
			if (array[y] > array[y + 1])
			{
				temp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = temp;
				print_array(array, size);
			}
			y = y + 1;
		}
		x = x + 1;
	}
}
