#include "main.h"

/**
 * swap_int - function that swaps the
 * value of two integer
 * @a: 1st pointer
 * @b: 2nd pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
