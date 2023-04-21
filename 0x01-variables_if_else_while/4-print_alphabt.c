#include	<stdio>


/**
 * main	-	prints the alphabet in lower case
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char vl;

	for (vl = 'a'; vl <= 'z'; vl++)
	{
		if (vl != 'e' && vl != 'q')
			putchar(vl);
	}

	putchar('\n');

	return (0);
}
