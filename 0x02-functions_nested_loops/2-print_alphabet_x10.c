#include "main.h"
/**
 * main -  prints alphabet in lower case times 10 followed by a new line
 */
void print_alpahabet_x10(void)
{
	char c;
	int i = 0;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
