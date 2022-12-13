#include "main.h"

/**
 * print_times_table - prints the times table for n.
 * @n: The value of the to be printed.
 * Return: Nothing.
 */

void print_times_table(int n)
{
	int a, b, ans;

	if (!(n > 15 || n < 0))
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				ans = (a * b);
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (ans < 10 && b != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((ans % 10) + '0');
				}
				else if (ans >= 10 && ans < 100)
				{
					_putchar(' ');
					_putchar((ans / 10) + '0');
					_putchar((ans % 10) + '0');
				}
				else if (ans >= 100 && b != 0)
				{
					_putchar((ans / 100) + '0');
					_putchar((ans / 10) % 10 + '0');
					_putchar((ans % 10) + '0');
				}
				else
					_putchar((ans % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
