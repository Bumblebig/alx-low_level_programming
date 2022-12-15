#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: Int for argument of the function
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b, c;
	
	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 0; a <= (size - 1); a++)
	{
		for (b = 0; b < (size - 1) - a; b++)
		{
			_putchar(' ');
		}
		for (c = 0; c <= a; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
