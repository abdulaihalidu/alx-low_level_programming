#include <unistd.h>

/**
 * _putchar - Wrtie a character to the standard output
 * @c: the character to be output
 *
 * Return: on success 1
 * On error, -1 is returned and the errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
