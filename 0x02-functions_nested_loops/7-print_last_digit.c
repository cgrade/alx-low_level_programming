#include "main.h"
/**
 * print_last_digit(int) - prints the last digit of a number
 * @int: the argument passed
 * return: the value of the last digit of the number
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');

	return (last_digit);
}

