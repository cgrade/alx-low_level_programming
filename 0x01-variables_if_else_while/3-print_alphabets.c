#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sm;
	int bg;

	for (sm = 97; sm <= 'z'; sm++)
	{
		putchar(sm);
	}
	for (bg = 65; bg <= 'Z'; bg++)
	{
		putchar(bg);
	}
	{
		putchar('\n');
	}
	return (0);
}

