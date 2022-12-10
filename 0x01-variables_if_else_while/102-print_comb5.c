#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{

	int dig1, dig2, num1, num2;

	for (dig1 = 0; dig1 < 10; ++dig1)
	{
		for (dig2 = 0; dig2 < 10; ++dig2)
		{
			for (num1 = dig1; num1 < 10; ++num1)
			{
				for (num2 = ((dig1 == num1) ? (dig2 + 1) : 0); num2 < 10; ++num2)
				{

					putchar('0' + dig1);
					putchar('0' + dig2);
					putchar(' ');
					putchar('0' + num1);
					putchar('0' + num2);

					if (dig1 != 9 || dig2 != 8 || num1 != 9 || num2 != 9)
					{

						putchar(',');
						putchar(' ');

					}
				}
			}
		}
	}

	putchar('\n');
	return (0);

}
