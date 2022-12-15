#include <stdio.h>
#include "main.h"

/**
 * print_numbers - code to prints numbers with new line
 * Return: 0
 */

void print_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
