#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "libasm.h"

#define S1  "Holberton School"
#define S2  ""
#define S3  "\0"

/**
 * main - Program entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
	assert(asm_strlen(S1) == 16);
	assert(asm_strlen(S2) == 0);
	assert(asm_strlen(S3) == 0);

	printf("All good!\n");
	return (EXIT_SUCCESS);
}
