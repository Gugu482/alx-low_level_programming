#include	<stdio.h>


/**
 * main - prints alphabet in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char ju;

	for (ju = 'a'; ju <= 'z'; ju++)
		putchar(ju);

	for (ju = 'A'; ju <= 'Z'; ju++)
		putchar(ju);

	putchar('\n');

	return (0);
}
