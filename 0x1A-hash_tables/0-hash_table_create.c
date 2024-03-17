#include "hash_tables.h"
/**
 * hash-table_create: function creates a hash table
 * @size - size takes the defined legnth on the hash table
 * Return: returns a pointer to the newly created hashtable.
 * return NULL on error.
 */

hash_table_t *hash_table_create(unsigned long int size){
    hash_table_t *table;

    if (size == 0){
        printf("size is NULL");
    }
    else{
        table = malloc(sizeof(hash_table_t));
        if (table == NULL){
            printf("cant alocate memory");
        }
        else{
            table->size = size;
            table->array = NULL;
        }
    }

    return (table);
}