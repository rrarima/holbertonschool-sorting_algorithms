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
/*	size_t c = 0;*/
	int temp;

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
			}
			printf("%d", array[y]);
			if (y < size - 1)
			{
				printf(", ");
			}
			y = y + 1;
		}
		printf("\n");
		x = x + 1;
	}
}
