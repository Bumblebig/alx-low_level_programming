#include "hash_tables.h"

/**
 * hash_table_get - get value associated with
 * a key in a hash table.
 * @ht:  pointer to the hash table.
 * @key: The key to get the value of.
 *
 * Return: NULL.
 * Otherwise -value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;

if (!ht || !key)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

while (node)
{
if (strcmp(node->key, key) == 0)
return (node->value);
node = node->next;
}
return (NULL);
}
