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
	float F; = 3.14f

	printf("Size of a char: %ld bytes(s)\n", sizeof(A));
	printf("Size of an int: %d bytes(s)\n", sizeof(B));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(G));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(C));
	printf("Size of a float: %f bytes(s)\n", sizeof(F));
	return (0);
}
