#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the digit whose last digit will be printed
 * Return: 0
 */

int print_last_digit(int n)
{

	int num;

	if (n < 0)

	{

		num = -1 * (n % 10);

	}

	else

	{

		num = n % 10;

	}

	_putchar(num + '0');
	return (num);

}
