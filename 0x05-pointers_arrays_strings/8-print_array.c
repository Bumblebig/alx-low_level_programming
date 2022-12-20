#include <stdio.h>
#include "main.h"

/**
 * print_array - Code to print element in array
 * @a: array to print
 * @n: number of elements to print
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
