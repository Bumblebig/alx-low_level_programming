#include <stdio.h>

/**
 * main - Prints fibonacci number0s
 * Return: 0
 */

int main(void)

{

	int tot;
	unsigned long a = 0, b = 1, ans;

	for (tot = 0; tot < 50; tot++)
	{

		ans = a + b;
		printf("%lu", ans);
				a = b;
		b = ans;

		if (tot == 49)
			printf("\n");

		else
			printf(", ");
	}
	return (0);
}
