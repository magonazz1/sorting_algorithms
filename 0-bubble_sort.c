#include "sort.h"

/**
 * bubble_sort - function that sorts list with bubble
 *
 * @array: The array to be printed
 *
 * @size: Number of elements in @array
 *
 * Return: void type return
 */
void bubble_sort(int *array, size_t size)
{
	size_t n = 0, t = size;
	int cup;

	if (array == NULL)
	{
		return;
	}

	for (t = size; t > 0; t--)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				cup = array[n];
				array[n] = array[n + 1];
				array[n + 1] = cup;
				print_array(array, size);
			}
		}
	}
}
