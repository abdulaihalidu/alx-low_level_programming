#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = '0'; hundreds <= '9'; hundreds++)
	{
		for (tens = (hundreds + 1); tens <= '9'; tens++)
		{
			for (ones = (tens + 1); ones <= '9'; ones++)
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);

				if (hundreds != '7' || tens != '8' || ones != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
