/*
 * File: 4-isalpha.c
 */

#include "main.h"

/**
 * _isalpha - checks if c is a letter, lowercase, or uppercase
 * @c: the character to be checked
 *
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
