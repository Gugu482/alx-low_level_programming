#include <stdio.h>

/**
 * main - prints lower case alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char lu;

	for (lu = 'z'; lu >= 'a'; lu--)
		putchar(lu);

	putchar('\n');

	return (0);
}
