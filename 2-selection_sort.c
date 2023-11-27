#include "sort.h"

/**
 * selection_sort - function that will sort list with selection_sort
 *
 * @array: The array to be printed
 *
 * @size: Number of elements in @array
 *
 * Return: void type return
 */
void selection_sort(int *array, size_t size)
{
	size_t x, c, set, tmp, swap;

	if (array == NULL)
	{
		return;
	}
	for (x = 0; x < size; x++)
	{
		for (set = x, c = x; c < size; c++)
			if (array[c] < array[set])
			{
				set = c;
				swap = 1;
			}
		if (swap == 1)
		{
			tmp = array[set];
			array[set] = array[x];
			array[x] = tmp;
			print_array(array, size);
			swap = 0;
		}
	}
}
