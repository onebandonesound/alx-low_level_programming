/*
 * File: 100-print_comb3.c
 * Auth : Wale
 */

#include <stdio.h>

/**
 * main - Entry point
 * Avoid: parameter
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(j);
		if (i != 56 && j != 58)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
