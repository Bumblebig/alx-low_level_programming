#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: value associated with the key
 *
 * Return: Upon failure - 0.
 * Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new, *runner;
unsigned long int index;

if (!ht || !key)
return (0);

index = key_index((const unsigned char *)key, ht->size);

if (ht->array[index] == NULL)
{
new = create_new(key, value);
if (!new)
return (0);
ht->array[index] = new;
return (1);
}
runner =  ht->array[index];
while (runner)
{
if (strcmp(key, runner->key) == 0)
{
free(runner->value);
runner->value = strdup(value);
return (1);
}
runner = runner->next;
}
new = create_new(key, value);
if (!new)
return (0);
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}

/**
 *create_new - function that creates a new node
 *@key: (const char) key
 *@value: (const char) value
 *
 *Return: pointer to new node
 */
hash_node_t *create_new(const char *key, const char *value)
{
hash_node_t *n;
n = malloc(sizeof(hash_node_t));
if (!n)
{
free(n);
return (NULL);
}
n->key = strdup(key);
if (!n->key)
{
free(n);
return (NULL);
}
n->value = strdup(value);
if (!n->value)
{
free(n);
return (NULL);
}
n->next = NULL;
return (n);
}
