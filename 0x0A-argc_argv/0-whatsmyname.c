#include <stdio.h>
#include <stdlib.h>

/**
 * main -  A program tht print it's name followed by a new line
 * @argc: a variable that stores the number of arguments passed
 * @argv: an Array variable that stores all the arguments passed
 * Return: 0 (Always Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("the program's name is %s\n", *argv);
	return (0);
}
