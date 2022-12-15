#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for an uppercase
 * @c: the variable to be checked
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
