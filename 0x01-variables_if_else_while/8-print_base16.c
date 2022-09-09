#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int num = '0';
	int base_16_a_f = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (base_16_a_f <= 'f')
	{
		putchar(base_16_a_f);
			base_16_a_f++;
	}
	putchar('\n');
}
