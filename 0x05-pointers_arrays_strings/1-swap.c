#include "main.h"

/**
 * swap_int - swaps the valur of two integers
 * @a: pointer to first value a
 * @b: pointer to second value b
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
