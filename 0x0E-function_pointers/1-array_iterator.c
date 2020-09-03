#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array of int elements
 * @size: size of the array
 * @action: function pointer that take in an int
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size != 0 && action != 0)
		for (i = 0; i < size; i++)
			(*action)(array[i]);
}
