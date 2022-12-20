#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints the character of the string to stdout
 * @str: string to print
 * Return: 0
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		putchar(*(str + i));
		i = i + 2;
	}
	putchar('\n');
}
