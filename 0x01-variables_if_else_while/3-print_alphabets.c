#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{

	char letters;
	char upLetters;

	for (letters = 'a' ; letters <= 'z' ; letters++)
	{

		putchar(letters);

	}

	for (upLetters = 'A' ; upLetters <= 'Z' ; upLetters++)

	{

		putchar(upLetters);

	}

	putchar('\n');

	return (0);

}
