#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies string pointed
 * @src: source
 * @dest: destination
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
