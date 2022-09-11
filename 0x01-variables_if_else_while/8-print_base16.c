#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		putchar(a);
	}
	for (b = 97; b <= 'f'; b++)
	{
		putchar(b);
	}
	{
		putchar('\n');
	}
	return (0);
}
