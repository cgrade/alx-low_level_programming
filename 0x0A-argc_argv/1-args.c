#include <stdio.h>
/**
 * main - A program that print's number of arguments passed.
 * @argc: int variable that records the number of arg passed
 * @argv: char variable that holds the args passed
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
