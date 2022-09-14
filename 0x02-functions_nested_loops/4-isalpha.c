#include "main.h"
/**
 * _isalpha.c - A program that checks for alphebetic character
 * 
 * @c: is the argument of the function
 * 
 * Return: return 0 or 1 depending on the condition
 *
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

