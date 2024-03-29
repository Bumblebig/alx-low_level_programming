#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
	unsigned long int in;

	for (in = 0; in < ht->size; in++)
	{
		if (ht->array[in] != NULL)
		{
			node = ht->array[in];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
