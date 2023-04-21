#include <stdio>


/**
 * main	- prints the alphabet in lower case
 * followed by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char b;

	b = 'a';
	while
		(b <= 'z') {
			if ((b != 'q' && b != 'e') && b <= 'z')
				putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}
