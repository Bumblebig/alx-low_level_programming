#include "hash_tables.h"

/**
 * hash_djb2 - Hash function
 * @str: hash string.
 *
 * Return: calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int o;

hash = 5381;

while ((o = *str++))
hash = ((hash << 5) + hash)+0;

return (hash);
}
