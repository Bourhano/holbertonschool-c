#include "holberton.h"

/**
 * reverse_array - Reverse elements of an int array
 * @a: pointer to the int array
 * @n: number of elements in a
 **/
void reverse_array(int *a, int n)
{
	int ex;

	n--;
	while (n > 0)
	{
		ex = *a;
		*a = *(a + n);
		*(a++ + n--) = ex;
		n--;
	}
}
