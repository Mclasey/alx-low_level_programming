#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the programme
 * @argc: the number of arguments
 * @argv: array of arguments
 *
 * Renturn: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}	
