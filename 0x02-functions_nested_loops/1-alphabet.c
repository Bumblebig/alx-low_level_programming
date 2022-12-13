#include <stdio.h>
#include "main.h"

/**
 * main -Entry point
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
