#include <stdio.h>

#include <math.h>

/**
 * main -  prints largest prime factor of a number
 * Return: Always 0.
 */

int main(void)
{
	long int num = 612852475143;
	int a;

	for (a = 2; a <= sqrt(num); a++)
	{
		if (num % a == 0)
		{
			num = num / a;
			a = 1;
		}
	}
	printf("%ld\n", num);
	return (0);
}
