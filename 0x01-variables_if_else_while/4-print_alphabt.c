#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	return (0);
}
