#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - loops and prints the alphabets 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{

		int letters;

		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
