#include <stdio.h>

/*
 * main - Prints all possible combination of ingle digits separated by comma
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
