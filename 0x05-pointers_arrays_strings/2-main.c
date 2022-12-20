#include "#main.c"
#include <stdio.h>

/**
 * main - check the code
 * return: Always 0.
 */

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
