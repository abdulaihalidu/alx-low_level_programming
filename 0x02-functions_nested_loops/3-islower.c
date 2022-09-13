/*
 * File: 3-islower.c
 */

#include "main.h"

/**
 * _islower - A function that checks for a lower case character
 * @c: the character to be checked
 *
 * Return: 1 if true, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
