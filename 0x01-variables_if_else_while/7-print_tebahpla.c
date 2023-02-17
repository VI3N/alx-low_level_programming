#include <stdio.h>

/**
 * main - Print lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int s = 97, e = 122;

	while (e <= s)
	{
		putchar(e);
		e++;
	}

	putchar('\n');

	return (0);
}
