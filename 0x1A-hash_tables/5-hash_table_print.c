#include "hash_tables.h"

/**
 * hash_table_print - a hash table is printed
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nodes;
	unsigned long int i;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			nodes = ht->array[i];
			while (nodes != NULL)
			{
				printf("'%s': '%s'", node->key, nodes->value);
				nodes = nodes->next;
				if (nodes != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
