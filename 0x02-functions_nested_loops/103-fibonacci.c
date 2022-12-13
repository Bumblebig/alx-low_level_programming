#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	unsigned long tot, a, b, c, ans;
	a = ans = 0;
	b = 1;

	for (tot = 0; tot < 50; tot++)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0 && c < 4000000)
		{
			ans += c;
		}
	}

	printf("%lu\n", ans);
	return (0);
}
