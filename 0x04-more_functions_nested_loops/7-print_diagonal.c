#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of lines
 * Returns:0
 */

void print_diagonal(int n)
{
	int y, z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 1; y <= n; y++)
		{
			for (z = 1; z < i; z++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
