#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natural numbers from n to 98.
 * @a: the number to start counting from to 98
 * Return: void returns nothing
 */

void print_to_98(int a)
{

	if (a < 98)
	{

		for (a = a; a < 98; a++)
		{
			printf("%d, ", a);
			printf("%d\n", 98);
		}
	}

	else
	{
		for (a = a; a > 98; a--)
		{
			printf("%d, ", a);
			printf("%d\n", 98);
		}
	}

}
