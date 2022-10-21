#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: i if true, 0 if false
 * on error, -i return.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
