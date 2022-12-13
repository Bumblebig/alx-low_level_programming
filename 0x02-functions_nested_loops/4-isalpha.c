#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
