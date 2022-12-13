#include <stdio.h>

/**
 * main - Entry point
 * Return; Always 0
 */

int main(void)
{

	int count;
	unsigned long a, b, c;
	unsigned long d, e, f, next;

	count = 0;

	a = 0;
	b = 1;

	for (count = 1; count <= 91; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu, ", c);
	}

	d = a % 1000;
	a = a / 1000;
	e = b % 1000;
	b = b / 1000;

	while (count <= 98)
	{
		next = (d + e) / 1000;
		f = (d + e) -next * 1000;
		c = (a + b) +next;
		d = e;
		e = f;
		a = b;
		b = c;

		if (f >= 100)
			printf("%lu%lu", c, f);

		else
			printf("%lu0%lu", c, f);
		
		if (count != 98)
			printf(", ");

		count++;
	}

	putchar('\n');
	return (0);
}
