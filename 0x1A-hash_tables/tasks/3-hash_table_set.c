
/*
    * hash_table_set - function that adds an element to the hash table
    * @ht: is the hash table you want to add or update the key/value to
    * @key: is the key. key can not be an empty string
    * @value: is the value associated with the key. value must be duplicated. value can be an empty string
    * Return: 1 if it succeeded, 0 otherwise
    
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned int long index;

    index = key_index((const unsigned char *) key, ht->size);
    if (ht->array[index] == NULL)
    {
        ht->array[index]->key = strdup(key);
        ht->array[index]->value = strdup(value);
        return (1);
    }
    else
    {
        hash_node_t *new_node = malloc(sizeof(hash_node_t));

        if (new_node == NULL)
            return (0);

        new_node->key = strdup(key);
        new_node->value = strdup(value);
        new_node->next = ht->array[index];
        ht->array[index] = new_node;

        return (1);
    }

    return (0);
}