#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int positive_or_negative(int i) 
{
	int i;

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	return (0);
}
