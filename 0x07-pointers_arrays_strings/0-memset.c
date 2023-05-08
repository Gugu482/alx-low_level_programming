#include "main.h"

/**
 * _memset - Entry point
 * @s: Destination pointed
 * @b: Constant byte
 * @n: Bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
