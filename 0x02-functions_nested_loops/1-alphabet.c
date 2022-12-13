#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point to print alphabet
 *
 * Return: Always 0
 */

void print_alphabet(void)
{

	char letters = 0;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}

	_putchar('\n');

}
