#include<stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Print all input strings followed by a new line
 * @separator: string to separate the strings with
 * @n: args count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *string;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(valist, char *);
		if (!string)
			string = "(nil)";
		if (separator && (!*separator || i == n - 1))/*separator[0] == 0 */
			printf("%s", string);
		else
			printf("%s%s", string, separator ? separator : "");
	}
	va_end(valist);
	printf("\n");
}
