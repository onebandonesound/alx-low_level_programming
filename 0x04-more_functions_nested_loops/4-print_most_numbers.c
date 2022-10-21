#include "main.h"
/**
 * print_most_numbers - print numbers
 * Return: always 0 success
 */
void print_most_numbers(void)
{
	int c = 0;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
			_putchar(c + 48);
	}
	_putchar('\n');
}
