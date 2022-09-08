#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char A = 'F';
	int B = 10;
	long long int C = 64;

	printf("Size of a char: %ld\n", sizeof(A));
	printf("Size of an int: %d\n", sizeof(B));
	printf("Size of a long long int: %ld\n", sizeof(C));
	return (0);
	}	
