#include<stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Print all input numbers followed by a new line
 * @separator: string to separate the numbers with
 * @n: args count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		if (!*separator || i == n - 1) /* separator[0] == 0 */
			printf("%d", va_arg(valist, int));
		else if (i != n - 1)
			printf("%d%s", va_arg(valist, int), separator);
	va_end(valist);
	printf("\n");
}
