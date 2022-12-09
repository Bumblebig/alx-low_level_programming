#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 *
 */

int main(void)
{

	int num;
	char letters;

	for (num = '0' ; num <= '9' ; num++)
	{

		putchar(num);

	}

	for (letters = 'a' ; letters <= 'f' ; letters++)
	{

		putchar(letters);

	}

	putchar('\n');

	return (0);

}
