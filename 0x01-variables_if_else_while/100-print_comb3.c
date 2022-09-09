#include <stdio.h>

/**
 * main - Entry point to the program
 *
 * Return: 0 (if successful)
 */
int main(void)
{
	int outter_num;
	int innner_num;

	for (outter_num = '0'; outter_num <= '9'; outter_num++)
	{
		for(inner_num = (outter_num + 1); inner_num <= '9'; inner_num++)
		{
			putchar(outter_num);
			putchar(inner_num);

			if (outter_num != '8' || inner_num != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
