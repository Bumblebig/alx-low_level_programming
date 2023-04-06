#include "hash_tables.h"

/**
 * hash_table_create - hash table is created
 * @size: array size
 * Return: NULL
 * Otherwise - new hash table gets pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *tab;
unsigned long int i;

tab = malloc(sizeof(hash_table_t));
if (!tab)
{
free(tab);
return (NULL);
}
tab->size = size;
tab->array = malloc(sizeof(hash_table_t *) * size);
if (!tab->array)
{
free(tab);
return (NULL);
}
while (i < size)
{
tab->array[i] = NULL;
i++;
}
return (tab);
}
