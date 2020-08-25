#include "variadic_functions.h"

/**
 * sum_them_all - Sum all of the input arguments
 * @n: args count
 *
 * Return: the value of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
