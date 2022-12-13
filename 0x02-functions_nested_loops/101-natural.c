#include <stdio.h>

/**
 * main - check the code
 * Return: 0
 */

int main(void)
{

	int num, ans;

	for (num = 0; num < 1024; num++)
		if (num % 3 == 0 || num % 5 == 0)
			ans += num;

	printf("%d\n", ans);
	return (0);
}
