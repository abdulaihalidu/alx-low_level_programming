#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Value is 0 if runs successfully
 */
int main(void)
{
	char s;
	int a;
	long int b;
	long long int c;
	float f;
	
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(s));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
