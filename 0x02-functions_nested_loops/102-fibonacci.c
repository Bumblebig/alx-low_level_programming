#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)

{

	int tot;
	unsigned long a = 0, b = 1, ans;

	for (tot = 0; tot < 50; tot++)
	{

		ans = fib1 + fib2;
		printf("%lu", sum);
		
		fib1 = fib2;
		fib2 = ans;

		if (tot == 49)
			printf("\n");

		else
			printf(", ");
		
	}
	return (0);
}
