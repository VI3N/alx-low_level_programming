#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
int s = 97, e = 122;
while (s <= e)
{
	putchar(s);
	s++;
}

putchar('\n');

return (0);
}
