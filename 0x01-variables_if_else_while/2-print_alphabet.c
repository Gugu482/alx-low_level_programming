#include	<stdio.h>

/**
 * main	-	prints alphabet in lower case
 * Return:	Always 0
 */
int main(void)

{
	char bd;

	for (bd = 'a'; bd <= 'z'; bd++)
	{
		putchar(bd);
	}
	putchar('\n');
	return (0);
}
