/*
 * File: 5-sign.c
 */

#include "main.h"

/**
 * print_sign - Checks for the sign of the number and prints it
 * @n: the number to be checked
 *
 * Return: 1 if n is positive, 0 is n is zero, and -1 if n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
