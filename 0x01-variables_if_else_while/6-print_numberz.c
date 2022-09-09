#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
