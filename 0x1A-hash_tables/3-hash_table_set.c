#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hastable to add an element to
 * @key: key of the element. NB (key can not be
 * an empty string)
 * @value: value associated with you
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int indx;

	if (key == NULL)
		return (1);

	indx = key_index((unsigned char *)key, ht->size);
	ht->array[indx] = malloc(sizeof(hash_node_t));
	ht->array[indx]->key = strdup(key);

	if (ht->array[indx]->key != NULL)
	{
		while (ht->array[indx] != NULL)
		{
			ht->array[indx] = ht->array[indx]->next;
		}

		ht->array[indx] = malloc(sizeof(hash_node_t));
		ht->array[indx]->key = strdup(key);
		ht->array[indx]->value = strdup(value);
		ht->array[indx]->next = NULL;

		return (0);
	}
	else
	{
		ht->array[indx] = malloc(sizeof(hash_node_t));
		ht->array[indx]->key = strdup(key);
		ht->array[indx]->value = strdup(value);
		ht->array[indx]->next = NULL;
		return (0);
	}
	return (1);
}
