#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of int elements
 * @size: size of the array
 * @cmp: function pointer that sets the comparison criteria
 *
 * Return:  index of the first element for which the cmp function
 * does not return 0
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
