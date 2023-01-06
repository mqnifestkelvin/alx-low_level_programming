#ifndef _hash_tables_h_
#define _hash_tablee_h_

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the list
 */
typedef struct hash_node_s{
	char *key;
	char *value;
	struct *hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of sze @eize
 * Each cell of the array is a pointer to the first nodr of a linked list,
 * because we want our HashTable to usr a chaining collision handling
 */
typedef struct hash_table_s{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
#endif
