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

	printf("Size of a char: %ld\n", sizeof(A) "bytes(s)");
	printf("Size of an int: %d\n", sizeof(B) "byte(s)");
	printf("Size of a long int: %ld\n", sizeof(G) "bytes(s)");
	printf("Size of a long long int: %ld\n", sizeof(C) "bytes(s)");
	printf("Size of a float: %f\n", sizeof(F) "bytes(s)");
	return (0);
}
