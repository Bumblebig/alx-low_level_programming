#include "main.h"

/**
 * print_number - function that prints a number
 * @n: input number
 * Return: nothing.
 */

void print_number(int n)
{
	unsigned int num1, num2;
	int div;
	int dig = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	num1 = n;
	num2 = num2;

	if (num1 > 9)
	{
		while (num1 >= 10)
		{
			dig = dig * 10;
			num1 = num1 / 10;
		}

		_putchar((num2 / dig) + '0');
		dig = dig / 10;
		
		for (div = dig; div >= 1; div = div / 10)
			_putchar((num2 / div) % 10 + '0');
	}
	else
		_putchar(num1 + '0');
}
