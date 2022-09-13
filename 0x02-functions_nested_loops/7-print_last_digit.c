/*
 * File: 7-print_last_digit.c
 */

#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: the number of which its last digit will be printed
 *
 * Return: the last value of the last digit
 */
int print_last_digit(int n)
{
	int last_d = n % 10;

	if (last_d < 0)
		last_d *= -1;
	_putchar(last_d + '0');

	return (last_d);
}
