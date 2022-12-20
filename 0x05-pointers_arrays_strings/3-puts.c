#include "main.h"
#include <stdio.h>

/**
 * _puts - Code to print string followed by new line to standard output
 * @str: string to be printed
 * Return: 0
 */

void _puts(char *str)
{
	fputs(str, stdout);
	fputs("\n", stdout);
}
