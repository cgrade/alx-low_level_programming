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
	long int G = 4;
	long long int C = 64;
	float F = 2.5f;

	printf("Size of a char: %ld bytes(s)", sizeof(A));
	printf("Size of an int: %d bytes(s)", sizeof(B));
	printf("Size of a long int: %ld bytes(s)", sizeof(G));
	printf("Size of a long long int: %ld bytes(s)", sizeof(C));
	printf("Size of a float: %f bytes(s)", sizeof(F));
	return (0);
}
