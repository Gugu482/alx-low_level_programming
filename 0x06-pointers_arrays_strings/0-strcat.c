#include "main.h"
#include <stdio.h>

/**
 * _strcat - Contenenates two strings
 * @dest: The detination string
 * @src: The string to be used
 * Return: Pointer to the resulting
 */

char *_strcat(char *dest, char *src)

{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
	}

	dest[dlen] = '\0';
	return (dest);
}
