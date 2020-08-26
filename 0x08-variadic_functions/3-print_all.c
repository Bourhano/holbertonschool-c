#include<stdio.h>
#include<stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - Print all kind of inputs
 * @format: string to indicate formats : c, i, f,s
 */
void print_all(const char *format, ...)
{
	va_list valist;
	const char *string = format;
	int l = 0;
	char *s;

	if  (format == NULL)
	{
		printf("\n");
		return;
	}
	while (*string++)
		l++;
	va_start(valist, format);
	string = format;
	while (*string)
	{
		switch (*string++)
		{
		case 'i':
			printf("%d%s", va_arg(valist, int), l == 1 ? "" : ", ");
			break;
		case 'c':
			printf("%c%s", va_arg(valist, int), l == 1 ? "" : ", ");
			break;
		case 's':
			s =  va_arg(valist, char *);
			printf("%s%s", *s ? s : "(nil)", l == 1 ? "" : ", ");
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double),
			       l == 1 ? "" : ", ");
			break;
		default:
			break;
		}
		l--;
	}
	va_end(valist);
	printf("\n");
}
