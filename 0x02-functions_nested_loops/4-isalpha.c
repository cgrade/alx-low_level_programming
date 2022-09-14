#include "main.h"
/**
 * 4-isalpha.c - A program that checks for alphebetic character
 * @c: is th the integer argument
 * Return: return 0 or 1 depending on the condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

