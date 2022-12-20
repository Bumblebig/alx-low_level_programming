#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string  - reverse a string;
 * @s: string to reverse
 * Return: 0
 */

void rev_string(char *s)
{
	int f;
	int temp;
	int i;

	f = strlen(s);
	for (i = 0; i < f / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
