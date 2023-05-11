#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to calculate natural square root
 * Return: Natural square root number
 */

int _sqrt_recursion(int n)

{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Calculates nattural square root
 * @n: Number to calculate natural square root
 * @i: Iterate number
 * Return: Natural square root
 */

int _sqrt(int n, int 1)

{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return(_sqrt(n, i + 1));
}
