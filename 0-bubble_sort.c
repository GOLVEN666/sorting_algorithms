#include "sort.h"

/**
 * bubble_sort - sorts an array of integers using Bubble_sort
 * @array: array of integers
 * @size: size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t sorted = 0, j = 0, temp;

	while (sorted != 1)
	{
		sorted = 1;
		for (j = 1; j < size; j++)
		{
			if (array[j - 1] > array[j])
			{
				temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
				sorted = 0;
				print_array(array, size);
			}
		}
	}
}
