#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 * Return oN SUCCESS 1.
 * oN ERROR, -1 is returned, and erno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
