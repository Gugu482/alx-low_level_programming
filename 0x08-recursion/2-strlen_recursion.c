#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: String to be used
 * Return: Always 0
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
