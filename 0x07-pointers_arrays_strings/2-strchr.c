#include "main.h"

/**
 * _strchr - checks for c
 * @s: Array
 * @c: Replaced character
 * Return: *S
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
