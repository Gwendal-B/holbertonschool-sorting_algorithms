#include "sort.h"
void recurs(int array[], int low, int high, size_t size);
int partition(int array[], int low, int high, size_t size);

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort.
 * @array: Array of integers to sort.
 * @size: Size of the array.
 *
 * Description: Uses the Lomuto partition scheme.
 *              The pivot is always the last element.
 *              Prints the array after each swap.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	recurs(array, 0, size - 1, size);
}

/**
 * partition - Partitions the array for Quick sort.
 * @array: Array of integers to partition.
 * @low: Starting index of the partition.
 * @high: Ending index of the partition.
 * @size: Size of the array.
 *
 * Return: The index of the pivot after partitioning.
 */
int partition(int array[], int low, int high, size_t size)
{
	int pivot = array[high];
	int temp, j;
	int i = low - 1;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}

		}
	}
	if (i + 1 != high)
	{
		temp = array[i + 1];
		array[i + 1] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * recurs - Recursively applies Quick sort to subarrays.
 * @array: Array of integers to sort.
 * @low: Starting index of the subarray.
 * @high: Ending index of the subarray.
 * @size: Size of the array.
 */
void recurs(int array[], int low, int high, size_t size)
{
	int index_pivot;

	if (low < high)
	{
		index_pivot = partition(array, low, high, size);
		recurs(array, low, index_pivot - 1, size);
		recurs(array, index_pivot + 1, high, size);
	}
}
