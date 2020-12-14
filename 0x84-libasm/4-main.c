#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>

#include "libasm.h"

#define S1  "Holberton School"
#define S2  "School"
#define S3  "Socool"

/**
 * main - Program entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
	printf("%s\n%s\n", asm_strstr(S1, S1), strstr(S1, S1));
	printf("%s\n%s\n", asm_strstr(S1, S2), strstr(S1, S2));
/**	printf("%s\n%s\n", asm_strstr(S1, S3), strstr(S1, S3));
 **/

	assert(strstr(S1, S1) == asm_strstr(S1, S1));
	assert(strstr(S1, S2) == asm_strstr(S1, S2));
	assert(strstr(S1, S3) == asm_strstr(S1, S3));

	printf("All good!\n");
	return (EXIT_SUCCESS);
}
