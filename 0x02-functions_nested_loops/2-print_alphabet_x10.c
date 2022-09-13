#include "main.h"
/**
 * main -  prints alphabet in lower case times 10 followed by a new line
 */
void print_alpahabet_x10(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		int j;
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar(i);
	}
}
