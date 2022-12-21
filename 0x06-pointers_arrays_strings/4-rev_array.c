#include "main.h"

/**
 * reverse_array - reverse
 * @a : pointer to int params
 * @n : pointer to int params
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	int temp;



	while (i < n)

	{

		temp = a[i];

		a[i] = a[n - 1];

		a[n - 1] = temp;

		i++;

		n--;

	}
}
