#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers.*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
