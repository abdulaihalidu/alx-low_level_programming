#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to the standard output
 *
 * @c: the character to be written to the standard output
 *
 * Return: on success - 1
 * on encountering an error, -1 is returned and errno is reported appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
