#include "main.h"
/**
 *swap_int - a function that swaps the values of two integers
 *@a: integer
 *@b:integer
 */
void swap_int(int *a, int *b)
{
	int **h1;
	int **h2;

	**h1 = *a;
	**h2 = *b;

	*a = **h2;
	*b = **h1;

}
