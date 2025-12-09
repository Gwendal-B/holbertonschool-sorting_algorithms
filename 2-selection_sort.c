#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index_min;
	int temp;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		index_min = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index_min])
				index_min = j;
		}
		if (index_min != i)
		{
			temp = array[i];
			array[i] = array[index_min];
			array[index_min] = temp;

			print_array(array, size);
		}
	}
}
