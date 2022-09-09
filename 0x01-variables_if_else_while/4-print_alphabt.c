#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	char letter;

	letter = 'a';
	for (; letter <= 'z'; letter++)
	{
		if ((letter == 'e') || (letter == 'q'))
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
